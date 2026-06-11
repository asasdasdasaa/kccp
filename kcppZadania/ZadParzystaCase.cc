#include <iostream>

bool czyParzystaBitowo(int liczba) { return (liczba & 1) == 0; }
bool czyParzystaModulo(int liczba) { return (liczba % 2) == 0; }
bool czyParzystaWarunkowy(int liczba) { return (liczba % 2 == 0) ? true : false; }

int main() {
    int liczba, wybor;
    
    std::cout << "Podaj liczbe do sprawdzenia: ";
    std::cin >> liczba;

    std::cout << "\nWybierz metode sprawdzania:\n";
    std::cout << "1 - Operacja bitowa (&)\n";
    std::cout << "2 - Tradycyjne modulo (%)\n";
    std::cout << "3 - Operator warunkowy (? :)\n";
    std::cout << "Twoj wybor: ";
    std::cin >> wybor;

    switch (wybor) {
        case 1:
            std::cout << "Wynik (Bitowo): " << (czyParzystaBitowo(liczba) ? "Parzysta" : "Nieparzysta") << std::endl;
            break;
        case 2:
            std::cout << "Wynik (Modulo): " << (czyParzystaModulo(liczba) ? "Parzysta" : "Nieparzysta") << std::endl;
            break;
        case 3:
            std::cout << "Wynik (Warunkowy): " << (czyParzystaWarunkowy(liczba) ? "Parzysta" : "Nieparzysta") << std::endl;
            break;
        default:
            std::cout << "Niepoprawny wybor metody!" << std::endl;
    }

    return 0;
}