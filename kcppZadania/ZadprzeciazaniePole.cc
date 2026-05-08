#include <iostream>
#include <cmath> 

using namespace std;

// Pole kwadratu - przyjmuje jeden parametr double
double obliczPowierzchnie(double bok) {
    return bok * bok; // Kwadrat boku
}

// Pole prostokata - przyjmuje dwa parametry double
double obliczPowierzchnie(double a, double b) {
    return a * b; // Iloczyn bokow
}

// Pole kola - przyjmuje jeden parametr float (rozroznienie typem)
float obliczPowierzchnie(float promien) {
    return M_PI * promien * promien; // PI razy promien do kwadratu
}

int main() {
    // Wywolanie wersji dla kwadratu (1x double)
    cout << "Kwadrat:    " << obliczPowierzchnie(5.0) << endl;

    // Wywolanie wersji dla prostokata (2x double)
    cout << "Prostokat:  " << obliczPowierzchnie(4.0, 6.0) << endl;

    // Wywolanie wersji dla kola (1x float)
    cout << "Kolo:       " << obliczPowierzchnie(3.0f) << endl;

    return 0; // Koniec programu
}