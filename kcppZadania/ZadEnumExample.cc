#include <iostream>
#include <string>

using namespace std;

// Definicja typu wyliczeniowego dla miesiecy
enum class Miesiac {
    Styczen = 1, // Start liczenia od 1
    Luty,
    Marzec,
    Kwiecien,
    Maj,
    Czerwiec,
    Lipiec,
    Sierpien,
    Wrzesien,
    Pazdziernik,
    Listopad,
    Grudzien
};

// Funkcja zwracajaca nazwe miesiaca na podstawie enuma
string miesiacNaTekst(Miesiac m) {
    switch (m) {
        case Miesiac::Styczen:    return "Styczen";
        case Miesiac::Luty:       return "Luty";
        case Miesiac::Marzec:     return "Marzec";
        case Miesiac::Kwiecien:   return "Kwiecien";
        case Miesiac::Maj:        return "Maj";
        case Miesiac::Czerwiec:   return "Czerwiec";
        case Miesiac::Lipiec:     return "Lipiec";
        case Miesiac::Sierpien:   return "Sierpien";
        case Miesiac::Wrzesien:   return "Wrzesien";
        case Miesiac::Pazdziernik: return "Pazdziernik";
        case Miesiac::Listopad:   return "Listopad";
        case Miesiac::Grudzien:   return "Grudzien";
        default:                  return "Nieznany";
    }
}

int main() {
    // Inicjalizacja zmiennej typu Miesiac
    Miesiac wybrany = Miesiac::Kwiecien;

    cout << "--- Test Typu Enum ---" << endl;

    // Wyswietlenie nazwy przy uzyciu funkcji
    cout << "Miesiac tekstowo: " << miesiacNaTekst(wybrany) << endl;

    // Rzutowanie na int w celu pobrania wartosci liczbowej
    cout << "Numer w kalendarzu: " << static_cast<int>(wybrany) << endl;

    // Sprawdzenie warunkowe wybranego elementu
    if (wybrany == Miesiac::Kwiecien) {
        cout << "Potwierdzono: To jest kwiecien." << endl;
    }

    return 0;
}