#include <iostream>
#include <string>
#include <cmath> 

// Definiujemy PI na wypadek, gdyby kompilator nie miał włączonego standardu POSIX z M_PI
const double PI = 3.14159265358979323846;

class Figura {
protected:
    std::string nazwa;

public:
    Figura(std::string p_nazwa) : nazwa(p_nazwa) {}
    
    // Wirtualny destruktor - kluczowy przy polimorfizmie, by uniknąć wycieków pamięci
    virtual ~Figura() {}

    // Metody czysto wirtualne (Pure Virtual Functions) -> czynią klasę abstrakcyjną
    virtual double obliczPole() const = 0;
    virtual double obliczObwod() const = 0;

    std::string pobierzNazwe() const { return nazwa; }
};



class Kwadrat : public Figura {
private:
    double a;
public:
    Kwadrat(double p_a) : Figura("Kwadrat"), a(p_a) {}
    
    double obliczPole() const override { return a * a; }
    double obliczObwod() const override { return 4 * a; }
};

class Prostokat : public Figura {
private:
    double a, b;
public:
    Prostokat(double p_a, double p_b) : Figura("Prostokat"), a(p_a), b(p_b) {}
    
    double obliczPole() const override { return a * b; }
    double obliczObwod() const override { return 2 * (a + b); }
};

class Trojkat : public Figura {
private:
    double a, b, c; // boki
    double h;       // wysokość opuszczona na bok 'a'
public:
    Trojkat(double p_a, double p_b, double p_c, double p_h) 
        : Figura("Trojkat"), a(p_a), b(p_b), c(p_c), h(p_h) {}
    
    double obliczPole() const override { return 0.5 * a * h; }
    double obliczObwod() const override { return a + b + c; }
};

class Kolo : public Figura {
private:
    double r;
public:
    Kolo(double p_r) : Figura("Kolo"), r(p_r) {}
    
    double obliczPole() const override { return PI * r * r; }
    double obliczObwod() const override { return 2 * PI * r; }

    
    // Szukamy promienia koła o zadanej powierzchni X. 
    // Wzór: X = PI * R^2  =>  R^2 = X / PI  =>  R = sqrt(X / PI)
    double Dystans(double wymaganaPowierzchniaNaOsobe) const {
        if (wymaganaPowierzchniaNaOsobe <= 0) return 0.0;
        return std::sqrt(wymaganaPowierzchniaNaOsobe / PI);
    }
};


int main() {
    std::cout << "=== Polimorfizm: Klasy i Metody Abstrakcyjne ===" << std::endl;

    // Tworzymy tablicę wskaźników typu Figura* (klasa bazowa)
    Figura* figury[4];
    figury[0] = new Kwadrat(5.0);              // Kwadrat o boku 5
    figury[1] = new Prostokat(4.0, 6.0);       // Prostokąt 4x6
    figury[2] = new Trojkat(3.0, 4.0, 5.0, 4.0); // Trójkąt prostokątny o bokach 3,4,5 i h=4
    figury[3] = new Kolo(3.0);                 // Koło o promieniu 3

    // Prezentacja obliczeń pola i obwodu przez polimorfizm
    std::cout << "\n--- Obliczenia dla figur geometrzycznych ---" << std::endl;
    for (int i = 0; i < 4; ++i) {
        std::cout << "\nFigura: " << figury[i]->pobierzNazwe() << std::endl;
        std::cout << " -> Pole powierzchni: " << figury[i]->obliczPole() << std::endl;
        std::cout << " -> Obwod:            " << figury[i]->obliczObwod() << std::endl;
    }

    //Prezentacja specjalnej funkcji Dystans (wymaga rzutowania wskaźnika na klasę Kolo)
    std::cout << "\n--- Analiza obostrzen i dystansu spolecznego (Klasa Kolo) ---" << std::endl;
    
    //Pobieramy wskaźnik na czwarte koło z naszej tablicy i rzutujemy go na typ Kolo*
    Kolo* mojeKolo = dynamic_cast<Kolo*>(figury[3]);
    
    if (mojeKolo != nullptr) {
        double obostrzenieMetrazu = 15.0; // rzadowe X metrów kwadratowych na osobę
        double bezpiecznyPromien = mojeKolo->Dystans(obostrzenieMetrazu);
        
        std::cout << "Jesli rzad wymaga " << obostrzenieMetrazu << " m^2 na osobe," << std::endl;
        std::cout << "to nastepna osoba moze znalezc sie w minimalnej odleglosci (promieniu): " 
                  << bezpiecznyPromien << " metra." << std::endl;
    }

    //Sprzątanie pamięci
    for (int i = 0; i < 4; ++i) {
        delete figury[i];
    }

    return 0;
}