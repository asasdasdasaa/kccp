#include <iostream>

// Struktura opakowujaca tablice, co umozliwia jej kopiowanie
struct Dane {
    int liczby[5];
};

// Funkcja przyjmuje obiekt przez wartosc - powstaje lokalna kopia
void modyfikuj(Dane d) {
    d.liczby[0] = 888; // Zmiana dotyczy tylko kopii wewnatrz funkcji
    std::cout << "Wartosc wewnatrz funkcji (kopia): " << d.liczby[0] << std::endl;
}

int main() {
    // Inicjalizacja struktury wartosciami
    Dane mojaStruktura = {{1, 2, 3, 4, 5}};

    std::cout << "Przed wywolaniem: " << mojaStruktura.liczby[0] << std::endl;
    
    // Przekazanie struktury (caly obiekt jest kopiowany na stos)
    modyfikuj(mojaStruktura); 
    
    // Oryginal pozostaje niezmieniony
    std::cout << "Po wywolaniu (oryginal): " << mojaStruktura.liczby[0] << std::endl;

    return 0; // Koniec programu
}