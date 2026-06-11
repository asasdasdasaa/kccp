#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    std::srand(std::time(nullptr));
    int poziom, zakresMax = 50, wylosowana, strzal;
    int proby = 0;
    const int LIMIT_PROB = 10;

    std::cout << "=== GRA: ZGADNIJ LICZBE ===" << std::endl;
    std::cout << "Wybierz poziom trudnosci:\n1 - Latwy (1-50)\n2 - Trudny (1-200)\nWybor: ";
    std::cin >> poziom;

    if (poziom == 2) {
        zakresMax = 200;
    }

    wylosowana = std::rand() % zakresMax + 1;
    std::cout << "\nWylosowano liczbe z zakresu 1 do " << zakresMax << ". Masz 10 prob!" << std::endl;

    while (proby < LIMIT_PROB) {
        proby++;
        std::cout << "[" << proby << "/" << LIMIT_PROB << "] Podaj swoj strzal: ";
        std::cin >> strzal;

        if (strzal == wylosowana) {
            std::cout << "Gratulacje! Zgadleś liczbe za " << proby << " razem!" << std::endl;
            return 0;
        } else if (strzal < wylosowana) {
            std::cout << "Za malo!" << std::endl;
        } else {
            std::cout << "Za duzo!" << std::endl;
        }
    }

    std::cout << "\nNiestety, limit 10 prob zostal wyczerpany. Przegrales." << std::endl;
    std::cout << "Prawidlowa liczba to: " << wylosowana << std::endl;

    return 0;
}