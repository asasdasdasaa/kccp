#include <iostream>

// Oblicza sume wszystkich pol tablicy korzystajac z adresacji
int obliczSume(int *ptr, int n) {
    int total = 0;
    for(int i = 0; i < n; i++) {
            total += *ptr;
            ptr++; // Przejscie do nastepnej komorki
    }
    return total;
}

int main() {
    int zestaw[] = {1, 2, 3, 4, 5, 10};
    int rozmiar = sizeof(zestaw) / sizeof(zestaw[0]); 

    // Przekazanie tablicy jako wskaznika do funkcji
    int wynik = obliczSume(zestaw, rozmiar);

    std::cout << "Suma wszystkich wartosci: " << wynik << std::endl;

    return 0;
}