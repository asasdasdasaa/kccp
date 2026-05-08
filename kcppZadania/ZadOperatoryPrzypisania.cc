#include <iostream>

using namespace std;

// Metoda demonstrujaca standardowe operacje matematyczne wykonywane na liczbach typu integer
void wykonajArytmetyke() {
    int liczba1 = 10;
    int liczba2 = 3;

    cout << "--- Sekcja 1: Obliczenia ---" << endl;
    cout << "Liczby: " << liczba1 << " oraz " << liczba2 << endl;
    
    // Wyswietlanie wynikow poszczegolnych dzialan
    cout << "Suma:            " << (liczba1 + liczba2) << endl;
    cout << "Roznica:         " << (liczba1 - liczba2) << endl;
    cout << "Iloczyn:         " << (liczba1 * liczba2) << endl;
    cout << "Iloraz (int):    " << (liczba1 / liczba2) << " (dzielenie bez reszty)" << endl;
    cout << "Reszta (modulo): " << (liczba1 % liczba2) << endl;
    cout << endl;
}

// Metoda pokazujaca wykorzystanie operatorow zlonych do modyfikacji zmiennych
void modyfikujWartosci() {
    int n = 10;
    cout << "--- Sekcja 2: Operatory Przypisania ---" << endl;
    cout << "Start: " << n << endl;

    n += 5;  // Zwiekszenie o 5
    cout << "Po dodaniu 5:    " << n << endl;

    n -= 2;  // Zmniejszenie o 2
    cout << "Po odjeciu 2:    " << n << endl;

    n *= 3;  // Mnozenie przez 3
    cout << "Po mnozeniu 3:   " << n << endl;

    n /= 4;  // Dzielenie przez 4
    cout << "Po dzieleniu 4:  " << n << endl;

    n %= 3;  // Reszta z dzielenia przez 3
    cout << "Po modulo 3:     " << n << endl;
    cout << endl;
}

int main() {
    // Wywolanie funkcji pomocniczych
    wykonajArytmetyke();
    modyfikujWartosci();

    return 0;
}