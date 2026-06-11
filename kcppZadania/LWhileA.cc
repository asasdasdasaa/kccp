#include <iostream>

int main() {
    int liczba;
    int suma = 0;
    int licznik = 0;

    std::cout << "Podaj liczby dodatnie do zsumowania (wpisanie 0 konczy program):\n";

    while (true) {
        std::cout << "Podaj liczbe: ";
        std::cin >> liczba;

        if (liczba == 0) {
            break; 
        }

        if (liczba < 0) {
            std::cout << "Komunikat: Pomięto liczbe ujemna (akceptujemy tylko dodatnie!)." << std::endl;
            continue;
        }

        suma += liczba;
        licznik++;
    }

    std::cout << "\nZakonczono wczytywanie." << std::endl;
    std::cout << "Ilosc wprowadzonych poprawnych liczb: " << licznik << std::endl;
    std::cout << "Suma tych liczb wynosi: " << suma << std::endl;

    return 0;
}