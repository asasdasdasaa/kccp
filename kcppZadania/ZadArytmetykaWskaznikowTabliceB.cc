#include <iostream>

using namespace std;

int main() {
    const int ROZMIAR = 5;
    float zestaw1[ROZMIAR], zestaw2[ROZMIAR], zestaw3[ROZMIAR];

    // Wskazniki operacyjne
    float *ptr1 = zestaw1;
    float *ptr2 = zestaw2;
    float *ptr3 = zestaw3;

    // Pobieranie danych od uzytkownika
    cout << "Wprowadz " << ROZMIAR << " liczb rzeczywistych:" << endl;
    for (int i = 0; i < ROZMIAR; i++) {
        cout << "Pozycja [" << i << "]: ";
        cin >> *(ptr1 + i); 
    }

    // Generowanie zawartosci pozostalych tablic
    for (int i = 0; i < ROZMIAR; i++) {
        // Tablica 2 to podwojona wartosc tablicy 1
        *(ptr2 + i) = *(ptr1 + i) * 2.0f;

        // Tablica 3 to suma dwoch poprzednich
        *(ptr3 + i) = *(ptr1 + i) + *(ptr2 + i);
    }

    cout << "\n--- Zestawienie wynikow ---" << endl;
    
    // Resetowanie pozycji wskaznikow do poczatku struktur
    ptr1 = zestaw1; ptr2 = zestaw2; ptr3 = zestaw3;

    cout << "ORIG\t\tDOUBLE\t\tSUM" << endl;
    for (int i = 0; i < ROZMIAR; i++) {
        cout << *ptr1 << "\t\t" << *ptr2 << "\t\t" << *ptr3 << endl;
        
        // Jednoczesne przesuniecie wszystkich wskaznikow
        ptr1++; 
        ptr2++; 
        ptr3++;
    }

    return 0;
}