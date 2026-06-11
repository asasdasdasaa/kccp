#include <iostream>
#include <string>

struct Pracownik {
    std::string stanowisko;
    int stazPracy;
    double pensja;

    
    Pracownik() {
        stanowisko = "Stazysta";
        stazPracy = 0;
        pensja = 3500.00;
        std::cout << "[Struktura] Wywolano konstruktor domyslny." << std::endl;
    }

   
    Pracownik(std::string p_stanowisko, int p_staz) {
        stanowisko = p_stanowisko;
        stazPracy = p_staz;
        pensja = 5000.00; // Wartość domyślna w ciele
        std::cout << "[Struktura] Wywolano konstruktor z argumentami (Inicjalizacja standardowa)." << std::endl;
    }

    
    Pracownik(std::string p_stanowisko, int p_staz, double p_pensja)
        : stanowisko(p_stanowisko), stazPracy(p_staz), pensja(p_pensja) {
        std::cout << "[Struktura] Wywolano konstruktor z argumentami (Lista inicjalizacyjna)." << std::endl;
    }

    
    ~Pracownik() {
        std::cout << "[Struktura] Wywolano destruktor dla stanowiska: " << stanowisko << std::endl;
    }

    void wyswietl() const {
        std::cout << " -> Pracownik: " << stanowisko << ", Staz: " << stazPracy << " lat, Pensja: " << pensja << " PLN" << std::endl;
    }
};

int main() {
    std::cout << "=== START PROGRAMU (STRUKTURA) ===" << std::endl;

    // Wywołanie konstruktora domyślnego
    Pracownik p1;
    p1.wyswietl();

    // Wywołanie konstruktora (standardowa inicjalizacja)
    Pracownik p2("Programista C++", 2);
    p2.wyswietl();

    // Wywołanie konstruktora (lista inicjalizacyjna)
    Pracownik p3("Senior Dev", 8, 18000.00);
    p3.wyswietl();

    std::cout << "=== KONIEC GLOWNEJ CZESCI MAIN (Teraz rusza destruktory) ===" << std::endl;
    return 0;
}