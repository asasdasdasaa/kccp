#include <iostream>
#include <iomanip>

int main() {
    std::cout << "Celsjusz   Fahrenheit" << std::endl;
    std::cout << "---------    ----------" << std::endl;

    for (int celsjusz = -10; celsjusz <= 10; celsjusz += 5) {
        double fahrenheit = (celsjusz * 9.0 / 5.0) + 32.0;
        
        // Wyrównanie kolumny Celsjusza do prawej (szerokość 7)
        std::cout << std::setw(7) << std::right << celsjusz;
        
        // Wyrównanie kolumny Fahrenheita do prawej (szerokość 13)
        std::cout << std::setw(13) << std::right << std::fixed << std::setprecision(2) << fahrenheit;
        std::cout << std::endl;
    }

    return 0;
}