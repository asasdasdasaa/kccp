#include <iostream>
#include <cmath>

// Wersja dla wykladnika calkowitego
double wyznaczPotege(int baza, int wyk) {
    double wynikowe = 1.0; 

    if (wyk == 0) return 1.0;
    
    if (wyk > 0) {
        for (int i = 0; i < wyk; i++) wynikowe *= baza;
    } else {
        int dodatniWyk = -wyk; 
        for (int i = 0; i < dodatniWyk; i++) wynikowe *= baza;
        wynikowe = 1.0 / wynikowe;
    }
    return wynikowe;
}

// Przeciazenie dla wartosci zmiennoprzecinkowych
double wyznaczPotege(double baza, double wyk) {
    return std::pow(baza, wyk);
}

int main() {
    std::cout << "Potega (int): " << wyznaczPotege(2, -3) << std::endl;
    std::cout << "Potega (double): " << wyznaczPotege(2.5, 2.0) << std::endl;
    return 0;
}