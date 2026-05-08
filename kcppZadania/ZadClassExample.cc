#include <iostream>
#include <string>

using namespace std;

// Definicja klasy reprezentujacej pojazd
class Pojazd {
public:
    Pojazd();                          // Deklaracja konstruktora
    ~Pojazd();                         // Deklaracja destruktora

    // Metody ustawiajace wartosci pol prywatnych (settery)
    void ustawNr(int n) { id = n; }
    void ustawKod(int k) { kod = k; }
    void ustawOdcien(string o) { odcien = o; }

    // Metody pobierajace wartosci pol prywatnych (gettery)
    int pobierzNr() { return id; }
    int pobierzKod() { return kod; }
    string pobierzOdcien() { return odcien; }

    void drukuj();                     // Deklaracja metody wypisujacej dane

private:
    int id;                            // Pole przechowujace numer id
    int kod;                           // Pole przechowujace kod pomocniczy
    string odcien;                     // Pole przechowujace kolor
};

// Implementacja konstruktora - ustawianie wartosci domyslnych
Pojazd::Pojazd() {
    id = 0;
    kod = 0;
    odcien = "Brak";
    cout << "INFO: Obiekt zostal utworzony." << endl;
}

// Implementacja destruktora - wywolywany przy usuwaniu obiektu
Pojazd::~Pojazd() {
    cout << "INFO: Obiekt zostal usuniety." << endl;
}

// Metoda wyswietlajaca sformatowany raport o obiekcie
void Pojazd::drukuj() {
    cout << "--- Parametry Pojazdu ---" << endl;
    cout << "ID:    " << id << endl;
    cout << "Kod:   " << kod << endl;
    cout << "Kolor: " << odcien << endl;
    cout << "-------------------------" << endl;
}

int main() {
    Pojazd mojWoz;                     // Tworzenie instancji klasy (wywolanie konstruktora)

    mojWoz.ustawNr(123);               // Ustawienie numeru ID
    mojWoz.ustawKod(55);               // Ustawienie kodu
    mojWoz.ustawOdcien("Czarny");      // Ustawienie koloru

    mojWoz.drukuj();                   // Wypisanie danych na ekran

    return 0;                          // Zakonczenie programu (wywolanie destruktora)
}