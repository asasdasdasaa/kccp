#include <iostream>
#include <iomanip>

int main() {
    double pi = 3.141592653589793;
    double e = 2.718281828459045;
    double phi = 1.618033988749894;

    // Nagłówki wyrównane spacjami do środka kolumn
    std::cout << "     Stala      Wartosc (domyslnie)    Notacja stala      Notacja naukowa" << std::endl;
    std::cout << "--------------- -------------------    -------------      ---------------" << std::endl;

    // Pi
    std::cout << std::setw(15) << std::left << "Pi" << " ";
    std::cout << std::setw(19) << std::left << std::setprecision(5) << pi << "   ";
    std::cout << std::setw(18) << std::left << std::fixed << std::setprecision(6) << pi << " ";
    std::cout << std::scientific << std::setprecision(6) << pi << std::endl;

    // e 
    std::cout << std::defaultfloat; 
    std::cout << std::setw(15) << std::left << "e" << " ";
    std::cout << std::setw(19) << std::left << std::setprecision(5) << e << "   ";
    std::cout << std::setw(18) << std::left << std::fixed << std::setprecision(6) << e << " ";
    std::cout << std::scientific << std::setprecision(6) << e << std::endl;

    // Złoty podział 
    std::cout << std::defaultfloat;
    std::cout << std::setw(15) << std::left << "Zloty podzial" << " ";
    std::cout << std::setw(19) << std::left << std::setprecision(5) << phi << "   ";
    std::cout << std::setw(18) << std::left << std::fixed << std::setprecision(6) << phi << " ";
    std::cout << std::scientific << std::setprecision(6) << phi << std::endl;

    return 0;
}