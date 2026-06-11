#include "../include/Zadania.h"
#include <iostream>
#include <cstring>
#include <string>
#include <iomanip>
#include <cmath>

// Implementacja klasy pomocniczej Punkt
Punkt Punkt::operator+(const Punkt& inny) const {
    return Punkt(this->x + inny.x, this->y + inny.y);
}

// Helper do czyszczenia bufora wejsciowego
void wyczyscCin() {
    std::cin.clear();
    std::cin.ignore(10000, '\n');
}

// ===================================================================
// 1. ZADANIE 1.1: Klasa i obiekt (Samochod)
// ===================================================================
class Samochod {
public:
    std::string marka;
    int rok;
    Samochod(std::string m, int r) : marka(m), rok(r) {}
    void wyswietl() { std::cout << "Samochod: " << marka << ", Rok: " << rok << std::endl; }
};

Zadanie1::Zadanie1() : ZadKcpp("Zadanie 1.1: Klasa Samochod") {}
void Zadanie1::wykonajZadanie() {
    std::cout << "--- " << pobierzNazwe() << " ---\n";
    Samochod auto1("Toyota", 2022);
    auto1.wyswietl();
}

// ===================================================================
// 2. ZADANIE 1.2: Biblioteka cstring (łańcuchy w stylu C)
// ===================================================================
Zadanie2::Zadanie2() : ZadKcpp("Zadanie 1.2: Przykłady cstring") {}
void Zadanie2::wykonajZadanie() {
    std::cout << "--- " << pobierzNazwe() << " ---\n";
    char tekst1[20] = "Hello ";
    char tekst2[] = "World!";
    std::strcat(tekst1, tekst2);
    std::cout << "Po strcat: " << tekst1 << std::endl;
    std::cout << "Dlugosc tekst1 (strlen): " << std::strlen(tekst1) << std::endl;
}

// ===================================================================
// 3. ZADANIE 1.3: Napisy std::string w C++
// ===================================================================
Zadanie3::Zadanie3() : ZadKcpp("Zadanie 1.3: Napisy std::string") {}
void Zadanie3::wykonajZadanie() {
    std::cout << "--- " << pobierzNazwe() << " ---\n";
    std::string s1 = "Programowanie ";
    std::string s2 = "Obiektowe";
    std::string s3 = s1 + s2;
    std::cout << "Konkatenacja stringow: " << s3 << std::endl;
    std::cout << "Dlugosc napisu (length()): " << s3.length() << std::endl;
}

// ===================================================================
// 4. ZADANIE 2.1: Sposoby zwracania wartosci przez funkcje
// ===================================================================
int zwrocWartosc() { return 10; }
int globalnaZmienna = 100;
int& zwrocReferencje() { return globalnaZmienna; }
int* zwrocWskaznik() { return &globalnaZmienna; }

Zadanie4::Zadanie4() : ZadKcpp("Zadanie 2.1: Zwracanie przez wartosc/ref/wskaznik") {}
void Zadanie4::wykonajZadanie() {
    std::cout << "--- " << pobierzNazwe() << " ---\n";
    std::cout << "1. Przez wartosc: " << zwrocWartosc() << std::endl;
    
    int& ref = zwrocReferencje();
    std::cout << "2. Przez referencje (przed zmiana): " << ref << std::endl;
    ref = 200;
    std::cout << "   Globalna zmienna po zmianie ref: " << globalnaZmienna << std::endl;

    int* wsk = zwrocWskaznik();
    std::cout << "3. Przez wskaznik: " << *wsk << std::endl;
    std::cout << "4. Tablice zwraca sie w C++ de facto jako wskaznik na jej pierwszy element (np. int*)." << std::endl;
}

// ===================================================================
// 5. ZADANIE 2.2: Przeciążanie funkcji (Obliczanie Pola)
// ===================================================================
double pole(double a) { return a * a; } // Kwadrat
double pole(double a, double b) { return a * b; } // Prostokąt
double poleKola(double r) { return 3.14159 * r * r; } // Koło

Zadanie5::Zadanie5() : ZadKcpp("Zadanie 2.2: Przeciazanie funkcji (Pole)") {}
void Zadanie5::wykonajZadanie() {
    std::cout << "--- " << pobierzNazwe() << " ---\n";
    std::cout << "Pole kwadratu (a=4): " << pole(4.0) << std::endl;
    std::cout << "Pole prostokata (a=4, b=5): " << pole(4.0, 5.0) << std::endl;
    std::cout << "Pole kola (r=3): " << poleKola(3.0) << std::endl;
}

// ===================================================================
// 6. ZADANIE 2.3: Przeciążanie funkcji (Dodawanie różnych typów)
// ===================================================================
int dodaj(int a, int b) { return a + b; }
double dodaj(double a, double b) { return a + b; }
std::string dodaj(std::string a, std::string b) { return a + b; }

Zadanie6::Zadanie6() : ZadKcpp("Zadanie 2.3: Przeciazanie funkcji (Dodaj)") {}
void Zadanie6::wykonajZadanie() {
    std::cout << "--- " << pobierzNazwe() << " ---\n";
    std::cout << "Dodaj int (5 + 7): " << dodaj(5, 7) << std::endl;
    std::cout << "Dodaj double (2.5 + 3.5): " << dodaj(2.5, 3.5) << std::endl;
    std::cout << "Dodaj string (A + B): " << dodaj(std::string("Studiuje "), std::string("C++")) << std::endl;
}

// ===================================================================
// 7. ZADANIE 2.4: Przeciążanie operatorów (Klasa Punkt i operator +)
// ===================================================================
Zadanie7::Zadanie7() : ZadKcpp("Zadanie 2.4: Przeciazanie operatora +") {}
void Zadanie7::wykonajZadanie() {
    std::cout << "--- " << pobierzNazwe() << " ---\n";
    Punkt p1(2, 5);
    Punkt p2(4, 3);
    Punkt p3 = p1 + p2;
    std::cout << "Punkt 1: (" << p1.x << ", " << p1.y << ")\n";
    std::cout << "Punkt 2: (" << p2.x << ", " << p2.y << ")\n";
    std::cout << "Wynik p1 + p2: (" << p3.x << ", " << p3.y << ")\n";
}

// ===================================================================
// 8. ZADANIE 4.1: Manipulacje strumieniem cout (Formatowanie tabeli)
// ===================================================================
Zadanie8::Zadanie8() : ZadKcpp("Zadanie 4.1: Manipulacja strumieniem cout") {}
void Zadanie8::wykonajZadanie() {
    std::cout << "--- " << pobierzNazwe() << " ---\n";
    double out1 = 1.2345, t1 = 12.34567;
    std::cout << "==================================================\n";
    std::cout << "Wynika naszego dzialania: x.xxxxx jest niepoprawny ale:\n";
    std::cout << std::setw(13) << std::right << "output1: " 
              << std::fixed << std::setprecision(4) << std::setw(8) << out1
              << std::setw(6) << "T: " 
              << std::setprecision(5) << std::setw(10) << t1 << std::endl;
    std::cout << "==================================================\n";
    std::cout << std::defaultfloat; // reset strumienia
}

// ===================================================================
// 9. ZADANIE 5.2: Struktury z konstruktorem (Książka)
// ===================================================================
struct Ksiazka {
    std::string tytul;
    double cena;
    Ksiazka(std::string t, double c) : tytul(t), cena(c) {}
};

Zadanie9::Zadanie9() : ZadKcpp("Zadanie 5.2: Struktura z konstruktorem") {}
void Zadanie9::wykonajZadanie() {
    std::cout << "--- " << pobierzNazwe() << " ---\n";
    Ksiazka k("Wiedzmin", 45.99);
    std::cout << "Ksiazka: " << k.tytul << ", Cena: " << k.cena << " PLN" << std::endl;
}

// ===================================================================
// 10. ZADANIE 5.6: Polimorfizm i klasy abstrakcyjne (Figury + Dystans) [OBOWIĄZKOWE]
// ===================================================================
class Figura {
public:
    virtual ~Figura() {}
    virtual double pole() const = 0;
};

class Kolo : public Figura {
private:
    double r;
public:
    Kolo(double pr) : r(pr) {}
    double pole() const override { return 3.14159265 * r * r; }
    double Dystans(double metrX) const { return std::sqrt(metrX / 3.14159265); }
};

// TEJ LINII NAJPRAWDOPODOBNIEJ BRAKUJE LUB MA LITERÓWKĘ:
Zadanie10::Zadanie10() : ZadKcpp("Zadanie 5.6: Metody Abstrakcyjne (OBOWIAZKOWE)") {}

void Zadanie10::wykonajZadanie() {
    std::cout << "--- " << pobierzNazwe() << " ---\n";
    Kolo k(5.0);
    std::cout << "Pole kola o promieniu 5: " << k.pole() << std::endl;
    double x = 15.0;
    std::cout << "Dla obostrzenia " << x << " m^2, bezpieczna odleglosc wynosi: " 
              << k.Dystans(x) << " m." << std::endl;
}
