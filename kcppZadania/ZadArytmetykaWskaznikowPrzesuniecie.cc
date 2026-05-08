#include <iostream>

// Przesuwa elementy tablicy cyklicznie w prawo o jedna pozycje
void rotujWPrawo(int* dane, int n) {
    if (n <= 1) return; 

    // Zachowanie ostatniego elementu przed nadpisaniem
    int buforOstatni = *(dane + n - 1);

    // Przesuwanie wartosci zaczynajac od konca tablicy
    int* wskaznik = dane + n - 1; 
    
    while (wskaznik > dane) {
        *wskaznik = *(wskaznik - 1); 
        wskaznik--;           
    }

    // Umieszczenie zapamietanego elementu na pierwszej pozycji
    *dane = buforOstatni;
}

void pokaz(int* tab, int rozmiar) {
    for (int i = 0; i < rozmiar; i++) {
        std::cout << *(tab + i) << " ";
    }
    std::cout << std::endl;
}

int main() {
    int liczby[] = {1, 2, 3, 4, 5, 10};
    int ile = sizeof(liczby) / sizeof(liczby[0]);

    std::cout << "Przed rotacja: ";
    pokaz(liczby, ile);

    rotujWPrawo(liczby, ile);

    std::cout << "Po rotacji:    ";
    pokaz(liczby, ile);

    return 0;
}