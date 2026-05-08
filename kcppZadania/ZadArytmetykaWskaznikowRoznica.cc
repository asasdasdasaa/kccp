#include <iostream>
#include <cstddef> // Obsluga typu ptrdiff_t

int main() {
    // Inicjalizacja zbioru danych
    int liczby[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

    // Definicja dwoch punktow w pamieci
    int* start = &liczby[2]; 
    int* koniec = &liczby[7]; 
    
    // Wyznaczenie odleglosci (liczba elementow miedzy adresami)
    ptrdiff_t odstep = koniec - start;

    std::cout << "Wskaznik 'start' celuje w:  " << *start << " (poz. 2)" << std::endl;
    std::cout << "Wskaznik 'koniec' celuje w: " << *koniec << " (poz. 7)" << std::endl;
    std::cout << "Liczba elementow pomiedzy:  " << odstep << std::endl;

    // Prezentacja wartosci ujemnej przy zamianie kolejnosci
    std::cout << "Odleglosc odwrotna:         " << (start - koniec) << std::endl;

    return 0;
}