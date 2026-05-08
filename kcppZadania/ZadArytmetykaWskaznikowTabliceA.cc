#include <iostream>

using namespace std;

int main() {
    // Alokacja i inicjalizacja danych (zakres 1-10)
    int dane[10];
    int* celownik = dane; 

    for (int i = 1; i <= 10; i++) {
        *celownik = i;   
        celownik++;      
    }

    // Wyznaczanie sumy elementow poprzez adresowanie
    celownik = dane; 
    int lacznie = 0;
    for (int i = 0; i < 10; i++) {
        lacznie += *(celownik + i); 
    }
    cout << "Suma kontrolna: " << lacznie << endl;

    // Poszukiwanie najwiekszej wartosci
    int topVal = *dane; 
    for (int i = 1; i < 10; i++) {
        if (*(dane + i) > topVal) {
            topVal = *(dane + i);
        }
    }
    cout << "Najwiekszy element: " << topVal << endl;

    // Inwersja kolejnosci przy uzyciu dwoch skrajnych wskaznikow
    int* pLewy = dane; 
    int* pPrawy = dane + 9; 

    while (pLewy < pPrawy) {
        // Klasyczna zamiana z uzyciem bufora
        int zamiennik = *pLewy;
        *pLewy = *pPrawy;
        *pPrawy = zamiennik;

        pLewy++;
        pPrawy--;
    }

    // Prezentacja efektu odwrocenia
    cout << "Dane po odwroceniu: ";
    int* pPrzeglad = dane;
    for (int i = 0; i < 10; i++) {
        cout << *(pPrzeglad++) << " ";
    }
    cout << endl;

    return 0;
}