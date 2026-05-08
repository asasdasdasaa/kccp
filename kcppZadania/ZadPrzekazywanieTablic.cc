#include <iostream>

// Szablon funkcji rozpoznajacy rozmiar tablicy N poprzez referencje
template <int N>
void wyswietl(int (&tab)[N]) {
    std::cout << "Rozmiar wykryty: " << N << std::endl;
    
    for (int i = 0; i < N; i++) {
        std::cout << "Indeks [" << i << "]: " << tab[i] << std::endl;
    }
}

int main() {
    int t1[] = {10, 20};             // Tablica 2-elementowa
    int t2[] = {1, 2, 3, 4, 5, 6};    // Tablica 6-elementowa

    // Kompilator generuje osobne funkcje dla roznych rozmiarow N
    wyswietl(t1); 
    wyswietl(t2); 

    return 0;
}