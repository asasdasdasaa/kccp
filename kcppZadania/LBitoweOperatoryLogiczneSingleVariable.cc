#include <iostream>
#include <cmath>

using namespace std;

// Metoda pakuje tablice wartosci logicznych (0/1) do jednej zmiennej typu byte
unsigned char konwertujNaBajt(int dane wejsciowe[]) {
    unsigned char kontener = 0; // Poczatkowy stan: same zera

    for (int i = 0; i < 8; i++) {
        if (dane wejsciowe[i] == 1) {
            // Przesuniecie bitowe o i-pozycji i laczenie operatorem alternatywy bitowej
            kontener = kontener | (1 << i);
        }
    }
    return kontener;
}

int main() {
    // Reprezentacja bitowa liczby 13 (8 + 4 + 1)
    int binarnie[8] = {1, 0, 1, 1, 0, 0, 0, 0};

    cout << "Zawartosc tablicy: ";
    for(int i = 0; i < 8; i++) cout << binarnie[i] << " ";
    cout << endl;

    unsigned char wynik = konwertujNaBajt(binarnie);

    // Rzutowanie na int, aby uniknac wypisania znaku ASCII w konsoli
    cout << "Zdekodowana liczba (system 10): " << (int)wynik << endl;

    return 0;
}