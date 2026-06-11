#include <iostream>
#include <string>

// 1. DEKLARACJA STRUKTURY
struct Ksiazka {
    std::string tytul;
    std::string autor;
    int rokWydania;
    double cena;

    // Odpowiedź na pytanie z komentarza: TAK, w C++ struktury mogą mieć 
    // konstruktory (działają niemal identycznie jak w klasach).

    // Konstruktor wersja A: Standardowy (zwykłe przypisanie wewnątrz ciała)
    // Ksiazka(std::string t_tytul, std::string t_autor, int t_rok, double t_cena) {
    //     tytul = t_tytul;
    //     autor = t_autor;
    //     rokWydania = t_rok;
    //     cena = t_cena;
    // }

    // Konstruktor wersja B: Lista inicjalizacyjna (wydajniejsza i bardziej elegancka)
    Ksiazka(std::string t_tytul, std::string t_autor, int t_rok, double t_cena)
        : tytul(t_tytul), autor(t_autor), rokWydania(t_rok), cena(t_cena) {}
};

int main() {
    std::cout << "=== Prezentacja dzialania struktury w C++ ===" << std::endl;

    
    // Tworzymy obiekt używając naszego konstruktora z listą inicjalizacyjną
    Ksiazka ksiazka1("Wiedzmin: Ostatnie zyczenie", "Andrzej Sapkowski", 1993, 39.99);

    //Odczyt
    std::cout << "\nPoczatek (Odczyt wartosci):" << std::endl;
    std::cout << "Tytul: " << ksiazka1.tytul << std::endl;
    std::cout << "Autor: " << ksiazka1.autor << std::endl;
    std::cout << "Rok wydania: " << ksiazka1.rokWydania << std::endl;
    std::cout << "Cena: " << ksiazka1.cena << " PLN" << std::endl;

    //zamiana
    ksiazka1.cena = 45.50;
    ksiazka1.rokWydania = 2026; // Załóżmy, że to nowe, zaktualizowane wydanie

    ///odczyt po zmianach
    std::cout << "\nPo zmianie wartości (Nowa cena i rok):" << std::endl;
    std::cout << "Tytul: " << ksiazka1.tytul << std::endl;
    std::cout << "Nowy rok wydania: " << ksiazka1.rokWydania << std::endl;
    std::cout << "Nowa cena: " << ksiazka1.cena << " PLN" << std::endl;

    return 0;
}