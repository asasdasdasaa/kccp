#include <iostream>
#include <string>

class Student {
private:
    std::string imie;
    int wiek;
    double sredniaOcen;

public:
    // Inicjalizuje zmienne domyślnymi wartościami, gdy tworzymy obiekt bez podawania argumentów
    Student() {
        imie = "Nieznany";
        wiek = 0;
        sredniaOcen = 0.0;
        std::cout << "[Klasa] Wywolano konstruktor domyslny." << std::endl;
    }

    
    // Przypisanie wartości odbywa się wewnątrz ciała konstruktora (w klamrach {})
    Student(std::string p_imie, int p_wiek) {
        imie = p_imie;
        wiek = p_wiek;
        sredniaOcen = 4.0; // Wartość domyślna wpisana standardowo
        std::cout << "Wywolano konstruktor z argumentami (Inicjalizacja standardowa)." << std::endl;
    }

    
    // Nowoczesny i wydajniejszy sposób po dwukropku. Zmienne są inicjalizowane zanim ruszy ciało konstruktora
    Student(std::string p_imie, int p_wiek, double p_srednia)
        : imie(p_imie), wiek(p_wiek), sredniaOcen(p_srednia) {
        std::cout << "Wywolano konstruktor z argumentami (Lista inicjalizacyjna)." << std::endl;
    }

    
    // Uruchamia się automatycznie, gdy obiekt kończy swoje życie (np. program wychodzi z funkcji main)
    ~Student() {
        std::cout << "Wywolano destruktor dla studenta: " << imie << std::endl;
    }

    // Metoda pomocnicza do wyswietlenia danych
    void wyswietl() const {
        std::cout << " -> Student: " << imie << ", Wiek: " << wiek << ", Srednia: " << sredniaOcen << std::endl;
    }
};

int main() {
    std::cout << "rozpoczecie programu" << std::endl;

    // Wywołanie konstruktora domyślnego
    Student s1;
    s1.wyswietl();

    // Wywołanie konstruktora z dwoma argumentami (standardowa inicjalizacja)
    Student s2("Mateusz", 21);
    s2.wyswietl();

    // Wywołanie konstruktora z trzema argumentami (lista inicjalizacyjna)
    Student s3("Ania", 20, 4.75);
    s3.wyswietl();

    std::cout << "Teraz rusza destruktory" << std::endl;
    return 0;
}