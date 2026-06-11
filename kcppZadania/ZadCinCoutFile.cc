#include <iostream>

int main() {
    int wiek;

    std::cout << "Informacja: Uruchomiono program." << std::endl;
    std::cout << "Podaj swoj wiek: ";
    std::cin >> wiek;

    if (std::cin.fail() || wiek < 0) {
        std::cerr << "[BLAD CRITICAL]: Podano nieprawidlowy wiek lub dane nie sa liczba!" << std::endl;
        return 1;
    }

    std::cout << "Sukces: Twoj wiek to " << wiek << " lat." << std::endl;
    return 0;
}