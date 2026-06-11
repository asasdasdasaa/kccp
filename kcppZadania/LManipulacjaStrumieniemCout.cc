#include <iostream>
#include <iomanip>

int main() {
    // Rzeczywiste wyniki działań matematycznych
    double bledny_x = 1.23456;
    double out0 = 12.345, t0 = 1.234;
    double out1 = 1.2345, t1 = 12.34567;
    double out2 = 1.2345, t2 = 12.345678;
    double avg_out = (out0 + out1 + out2) / 3.0;
    double avg_t = (t0 + t1 + t2) / 3.0;

    std::cout << "==================================================" << std::endl;
    std::cout << "Wynika naszego dzialania: " << bledny_x << " jest niepoprawny ale:" << std::endl;
    
    // Wiersz 0
    std::cout << std::setw(13) << std::right << "output: " 
              << std::fixed << std::setprecision(3) << std::setw(8) << out0
              << std::setw(7) << "T: " 
              << std::setprecision(3) << std::setw(7) << t0 << std::endl;

    // Wiersz 1
    std::cout << std::setw(13) << std::right << "output1: " 
              << std::fixed << std::setprecision(4) << std::setw(8) << out1
              << std::setw(6) << "T: " 
              << std::setprecision(5) << std::setw(10) << t1 << std::endl;

    // Wiersz 2
    std::cout << std::setw(13) << std::right << "output2: " 
              << std::fixed << std::setprecision(4) << std::setw(8) << out2
              << std::setw(6) << "T: " 
              << std::setprecision(6) << std::setw(11) << t2 << std::endl;

    // Separator
    std::cout << std::setw(6) << "" << std::setfill('-') << std::setw(33) << "" << std::setfill(' ') << std::endl;

    // Podsumowanie (Average)
    std::cout << std::setw(13) << std::right << "average: " 
              << std::fixed << std::setprecision(4) << std::setw(8) << avg_out
              << std::setw(6) << "T: " 
              << std::setprecision(6) << std::setw(11) << avg_t << std::endl;

    std::cout << "==================================================" << std::endl;

    return 0;
}