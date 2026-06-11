#include <cstdio>
#include <iostream>
#include <iomanip>

int main() {
    int liczba = 10;
    double pi = 3.14159265;

    // ==================== STYL JEZYKA C ====================
    printf("--- Styl C ---\n");
    printf("Liczba: %d\n", liczba);
    printf("Pi do 2 miejsc: %.2f\n", pi);
    
    // Wczytywanie w C
    int liczbaC;
    printf("Podaj liczbe (C): ");
    if (scanf("%d", &liczbaC) != 1) {
        printf("Blad wczytywania.\n");
    } else {
        printf("Wczytano: %d\n", liczbaC);
    }

    // ==================== STYL JEZYKA C++ ====================
    std::cout << "\n--- Styl C++ ---" << std::endl;
    std::cout << "Liczba: " << liczba << std::endl;
    std::cout << "Pi do 2 miejsc: " << std::fixed << std::setprecision(2) << pi << std::endl;

    // Wczytywanie w C++
    int liczbaCPP;
    std::cout << "Podaj liczbe (C++): ";
    if (!(std::cin >> liczbaCPP)) {
        std::cout << "Blad wczytywania." << std::endl;
    } else {
        std::cout << "Wczytano: " << liczbaCPP << std::endl;
    }

    return 0;
}