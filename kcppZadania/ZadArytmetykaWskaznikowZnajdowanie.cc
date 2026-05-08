#include <iostream>

// Funkcja wyznaczajaca najwieksza wartosc w tablicy przy uzyciu wskaznika
int znajdzNajwiekszy(int *ptr, int dlugosc) {
    
    // Inicjalizacja wartoscia pierwszego elementu, na ktory wskazuje ptr
    int maxVal = *ptr; 
    
    for(int i = 0; i < dlugosc; i++) {

        // Porownanie aktualnej wartosci pod adresem z dotychczasowym maksimum
        if(*ptr > maxVal) {
            maxVal = *ptr;
        }
        // Przesuniecie wskaznika na kolejny element tablicy
        ptr++;
    }
    return maxVal;
}

int main() {
    int dane1[] = {1, 2, 3, 4, 5, 10};
    // Wyznaczanie liczby elementow w tablicy
    int rozmiar1 = sizeof(dane1) / sizeof(dane1[0]); 

    // Wywolanie funkcji dla pierwszego zestawu danych
    int najwyzsza1 = znajdzNajwiekszy(dane1, rozmiar1);
    std::cout << "Najwieksza wartosc (test 1): " << najwyzsza1 << std::endl;

    int dane2[] = {10, 5, 4, 3, 2, 1};
    int rozmiar2 = sizeof(dane2) / sizeof(dane2[0]);
    
    // Wywolanie funkcji dla drugiego zestawu danych
    int najwyzsza2 = znajdzNajwiekszy(dane2, rozmiar2);
    std::cout << "Najwieksza wartosc (test 2): " << najwyzsza2 << std::endl;

    return 0;
}