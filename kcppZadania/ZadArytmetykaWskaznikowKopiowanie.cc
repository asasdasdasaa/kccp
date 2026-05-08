#include <iostream>

// Funkcja przenosząca zawartość z jednej tablicy do drugiej przy użyciu wskaźników
void przepiszDane(int* src, int* dest, int dlugosc) {
    for (int i = 0; i < dlugosc; i++) {
        // Przypisanie wartosci i inkrementacja adresów
        *dest = *src;
        src++;
        dest++;
    }
}

// Funkcja do prezentacji zawartości tablicy w konsoli
void wyswietlTablice(int* t, int n) {
    for (int i = 0; i < n; i++) {
        std::cout << *(t + i) << " ";
    }
    std::cout << std::endl;
}

int main() {
    const int LIMIT = 5;
    int zestawA[LIMIT] = {10, 20, 30, 40, 50};
    int zestawB[LIMIT]; 

    std::cout << "Zrodlo (zestaw A): ";
    wyswietlTablice(zestawA, LIMIT);

    // Realizacja procesu kopiowania
    przepiszDane(zestawA, zestawB, LIMIT);

    std::cout << "Kopia  (zestaw B): ";
    wyswietlTablice(zestawB, LIMIT);

    return 0;
}