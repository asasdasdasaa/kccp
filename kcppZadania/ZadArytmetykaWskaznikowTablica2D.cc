#include <iostream>
#include <cstdint>

using namespace std;

int main() {
    // Definicja macierzy kwadratowej 3x3
    int siatka[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    cout << "Lokacja poczatkowa struktury: " << siatka << endl;
    cout << "Rozmiar pojedynczego int: " << sizeof(int) << " bajty" << endl;
    cout << "---------------------------------------------" << endl;
    cout << "Wspolrzedne\tWartosc\t\tAdres (HEX)" << endl;

    // Iteracja przez strukture dwuwymiarowa
    for (int rzad = 0; rzad < 3; rzad++) {
        for (int kolumna = 0; kolumna < 3; kolumna++) {
            cout << "[" << rzad << "][" << kolumna << "]\t\t" 
                 << siatka[rzad][kolumna] << "\t\t" 
                 << &siatka[rzad][kolumna] << endl;
        }
        cout << "--- Koniec rzedu ---" << endl;
    }

    cout << "---------------------------------------------" << endl;
    
    // Obliczanie adresu konkretnego pola (rzad 1, kolumna 1) matematycznie
    // Skaczemy o (1 * liczba_kolumn + 1) pozycji od poczatku
    int *punktCelowy = &siatka[0][0] + (1 * 3 + 1); 
    cout << "Wartosc pod indeksem [1][1] (obliczona): " << *punktCelowy << endl;

    return 0;
}