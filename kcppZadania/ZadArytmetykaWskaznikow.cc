#include <iostream>

using namespace std;

// Analiza zachowania wskaźników przy inkrementacji i dereferencji
void testOperatorow() {
    int liczby[] = {10, 20, 30};
    int* ptr = liczby;

    cout << "--- Test 1: Logika wskaznikow ---" << endl;
    cout << "Start: wartosc = " << *ptr << " (pod adresem: " << ptr << ")" << endl;

    ptr++;      // Skok na kolejny element (20)
    ++ptr;      // Skok na kolejny element (30)
    cout << "Po dwukrotnym przesunieciu: " << *ptr << endl;

    ptr = liczby; 
    ++*ptr;       // Zwiekszenie samej wartosci o 1
    ++(*ptr);     // Kolejne zwiekszenie wartosci
    ++*(ptr);     // I jeszcze jedno zwiekszenie
    cout << "Wartosc elementu [0] po zmianach: " << liczby[0] << endl;

    int pobrana = *ptr++; // Pobranie wartosci i przesuniecie wskaźnika dalej
    cout << "Pobrano: " << pobrana << ", teraz wskazuje na: " << *ptr << endl;

    (*ptr)++; // Zmiana wartosci w miejscu bez przesowania celownika
    cout << "Nowa wartosc elementu [1]: " << liczby[1] << endl;
}

// Manipulacja zmiennymi lokalnymi poprzez arytmetyke adresow
void manipulacjaPamiecia() {
    int x = 0, y = 0, z = 0;
    int *w;

    cout << "\n--- Test 2: Sekwencja zmian x, y, z ---" << endl;

    y = 10;
    w = &z; *w = 20; // Zmiana z przez wskaznik
    w = &y; *w = 30; // Zmiana y przez wskaznik
    w = &x; *w = 40; // Zmiana x przez wskaznik

    // Proba modyfikacji zmiennej obok (zalezne od kompilatora)
    *(&x + 1) = 50; 
    cout << "Aktualny stan - X: " << x << " Y: " << y << " Z: " << z << endl;
}

int main() {
    testOperatorow();
    manipulacjaPamiecia();
    return 0;
}