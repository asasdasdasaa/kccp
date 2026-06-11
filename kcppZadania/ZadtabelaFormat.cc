#include <iostream>
#include <iomanip>
#include <string>

int main() {
    // Szerokości kolumn
    const int w_nazwa = 15;
    const int w_cena = 8;
    const int w_ilosc = 7;

    // Nagłówek
    std::cout << "|" << std::setw(w_nazwa) << std::left << " Nazwa"
              << "|" << std::setw(w_cena) << std::left << " Cena"
              << "|" << std::setw(w_ilosc) << std::left << " Ilosc" << "|" << std::endl;

    // Separator
    std::cout << "|";
    std::cout << std::setfill('-') << std::setw(w_nazwa) << "" << "|";
    std::cout << std::setw(w_cena) << "" << "|";
    std::cout << std::setw(w_ilosc) << "" << "|";
    std::cout << std::setfill(' ') << std::endl;

    // Wiersze danych
    std::cout << "| " << std::setw(w_nazwa - 1) << std::left << "Chleb"
              << "| " << std::setw(w_cena - 1) << std::right << std::fixed << std::setprecision(2) << 4.99
              << "| " << std::setw(w_ilosc - 1) << std::right << 5 << " |" << std::endl;

    std::cout << "| " << std::setw(w_nazwa - 1) << std::left << "Mleko"
              << "| " << std::setw(w_cena - 1) << std::right << 3.20
              << "| " << std::setw(w_ilosc - 1) << std::right << 10 << " |" << std::endl;

    std::cout << "| " << std::setw(w_nazwa - 1) << std::left << "Jajka (10 szt)"
              << "| " << std::setw(w_cena - 1) << std::right << 8.50
              << "| " << std::setw(w_ilosc - 1) << std::right << 3 << " |" << std::endl;

    return 0;
}