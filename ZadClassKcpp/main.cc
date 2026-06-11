#include <iostream>
#include "include/Zadania.h"
#include "include/ZadKcpp.h"

void wyswietlMenu() {
    std::cout << "\n=======================================================" << std::endl;
    std::cout << "                 ZINTEGROWANE MENU ZADAN C++           " << std::endl;
    std::cout << "=======================================================" << std::endl;
    std::cout << " SEKCJA 1: Podstawy obiektowosci i napisy" << std::endl;
    std::cout << "   1 - Zadanie 1.1: Klasa i obiekt (Samochod)" << std::endl;
    std::cout << "   2 - Zadanie 1.2: C-stringi (cstring)" << std::endl;
    std::cout << "   3 - Zadanie 1.3: Klasa std::string w C++" << std::endl;
    std::cout << "-------------------------------------------------------" << std::endl;
    std::cout << " SEKCJA 2: Zwracanie wartosci i przeciazanie" << std::endl;
    std::cout << "   4 - Zadanie 2.1: Metody zwracania danych" << std::endl;
    std::cout << "   5 - Zadanie 2.2: Przeciazanie funkcji 'pole'" << std::endl;
    std::cout << "   6 - Zadanie 2.3: Przeciazanie funkcji 'dodaj'" << std::endl;
    std::cout << "   7 - Zadanie 2.4: Przeciazanie operatora +" << std::endl;
    std::cout << "-------------------------------------------------------" << std::endl;
    std::cout << " SEKCJA 4 & 5: Strumienie, struktury i polimorfizm" << std::endl;
    std::cout << "   8 - Zadanie 4.1: Manipulator i formatowanie cout" << std::endl;
    std::cout << "   9 - Zadanie 5.2: Struktura z konstruktorem (Ksiazka)" << std::endl;
    std::cout << "  10 - Zadanie 5.6: Polimorfizm i klasy abstrakcyjne [REQ]" << std::endl;
    std::cout << "=======================================================" << std::endl;
    std::cout << "   0 - Zamknij program" << std::endl;
    std::cout << "=======================================================" << std::endl;
    std::cout << "Wybierz zadanie (0-10): ";
}

int main() {
    int wybor;

    do {
        wyswietlMenu();
        std::cin >> wybor;

        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(10000, '\n');
            wybor = -1;
        }

        ZadKcpp* zadanie = nullptr;

        switch (wybor) {
            case 1:  zadanie = new Zadanie1(); break;
            case 2:  zadanie = new Zadanie2(); break;
            case 3:  zadanie = new Zadanie3(); break;
            case 4:  zadanie = new Zadanie4(); break;
            case 5:  zadanie = new Zadanie5(); break;
            case 6:  zadanie = new Zadanie6(); break;
            case 7:  zadanie = new Zadanie7(); break;
            case 8:  zadanie = new Zadanie8(); break;
            case 9:  zadanie = new Zadanie9(); break;
            case 10: zadanie = new Zadanie10(); break;
            case 0:  std::cout << "Zamykanie programu. Do widzenia!" << std::endl; break;
            default: std::cout << "Blad! Wybierz liczbe z zakresu od 0 do 10." << std::endl;
        }

        if (zadanie != nullptr) {
            std::cout << "\n";
            zadanie->wykonajZadanie();
            std::cout << "\n";
            delete zadanie; // Sprzatanie pamieci RAM po kazdym wywolaniu
        }

    } while (wybor != 0);

    return 0;
}