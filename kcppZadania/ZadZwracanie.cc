#include <iostream>

int g_licznik = 100; // Zmienna globalna
int g_tab[] = {10, 20, 30};

// 1. Zwracanie przez wartosc: tworzy lokalna kopie danych
int zwrocWartosc() {
    int x = 10;
    return x; 
}

// 2. Zwracanie przez referencje: zwraca "alias" do istniejacej zmiennej
// UWAGA: Nigdy nie zwracaj referencji do zmiennych lokalnych!
int& zwrocReferencje() {
    return g_licznik;
}

// 3. Zwracanie przez wskaznik: zwraca adres pamieci zmiennej
int* zwrocWskaznik() {
    return &g_licznik;
}

// 4. Zwracanie tablicy: w C++ zwraca sie wskaznik na jej pierwszy element
int* zwrocTablice() {
    return g_tab; 
}

int main() {
    // Ad 1. Wartosc - bezpieczne, ale wolne przy duzych obiektach
    int v = zwrocWartosc();
    std::cout << "1. Wartosc (kopia): " << v << std::endl;

    // Ad 2. Referencja - umozliwia modyfikacje oryginalu
    zwrocReferencje() = 200; 
    std::cout << "2. Referencja (po zmianie): " << g_licznik << std::endl;

    // Ad 3. Wskaznik - wymaga dereferencji (*), by dostac sie do danych
    int* p = zwrocWskaznik();
    std::cout << "3. Wskaznik (adres): " << p << " (wartosc): " << *p << std::endl;

    // Ad 4. Tablica - uzywamy jak zwyklej tablicy lub wskaznika
    int* t = zwrocTablice();
    std::cout << "4. Tablica[1]: " << t[1] << std::endl;

    return 0;
}