#include <iostream>


bool czyParzystaBitowo(int liczba) {
    return (liczba & 1) == 0;
}

bool czyParzystaModulo(int liczba) {
    return (liczba % 2) == 0;
}

bool czyParzystaWarunkowy(int liczba) {
    return (liczba % 2 == 0) ? true : false;
}

int main() {
    int liczba;
    std::cout << "Podaj liczbe calkowita: ";
    std::cin >> liczba;

    std::cout << "(a) Bitowo: " << (czyParzystaBitowo(liczba) ? "Parzysta" : "Nieparzysta") << std::endl;
    std::cout << "(b) Modulo: " << (czyParzystaModulo(liczba) ? "Parzysta" : "Nieparzysta") << std::endl;
    std::cout << "(c) Operator warunkowy: " << (czyParzystaWarunkowy(liczba) ? "Parzysta" : "Nieparzysta") << std::endl;

    return 0;
}