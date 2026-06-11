#include <iostream>
#include <string>

int main() {
    std::string metoda;
    int liczba;

    std::cout << "Podaj liczbe: ";
    std::cin >> liczba;
    std::cout << "Wpisz slownie metode ('bitowo', 'modulo' lub 'warunek'): ";
    std::cin >> metoda;

    // Przemmapowanie string -> int, ponieważ switch nie obsługuje bezpośrednio obiektów string
    int kodMetody = -1;
    if (metoda == "bitowo")   kodMetody = 1;
    if (metoda == "modulo")   kodMetody = 2;
    if (metoda == "warunek")  kodMetody = 3;

    switch (kodMetody) {
        case 1:
            std::cout << "Wynik: " << ((liczba & 1) == 0 ? "Parzysta" : "Nieparzysta") << std::endl;
            break;
        case 2:
            std::cout << "Wynik: " << ((liczba % 2) == 0 ? "Parzysta" : "Nieparzysta") << std::endl;
            break;
        case 3:
            std::cout << "Wynik: " << ((liczba % 2 == 0) ? "Parzysta" : "Nieparzysta") << std::endl;
            break;
        default:
            std::cout << "Blad: Nie rozpoznano slowa kluczowego!" << std::endl;
    }

    return 0;
}