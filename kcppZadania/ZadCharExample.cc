#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char tekst1[] = "Programowanie";
    char tekst2[20] = "C++";
    char bufor[50];

    cout << "--- Dane o tablicach ---" << endl;
    cout << "Tekst: " << tekst1 << " | Dlugosc: " << strlen(tekst1) << " | Bajty: " << sizeof(tekst1) << endl;

    // Bezpieczne kopiowanie
    strncpy(bufor, tekst1, sizeof(bufor) - 1);
    bufor[sizeof(bufor) - 1] = '\0'; 
    cout << "Kopia w buforze: " << bufor << endl;

    // Laczenie fraz
    char powitanie[40] = "Witaj ";
    char user[] = "Uzytkowniku!";
    strncat(powitanie, user, sizeof(powitanie) - strlen(powitanie) - 1);
    cout << "Polaczony tekst: " << powitanie << endl;

    // Weryfikacja identycznosci
    char klucz[] = "Sekret123";
    char wpis[] = "Sekret123";

    if (strcmp(klucz, wpis) == 0) {
        cout << "Teksty sa takie same." << endl;
    } else {
        cout << "Teksty sie roznia." << endl;
    }

    return 0;
}