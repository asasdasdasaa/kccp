#include <iostream>
#include <sstream>
#include <string>

int main() {
    // 1. Składanie tekstu (zapis do strumienia)
    std::stringstream ss;
    std::string imie = "Jan";
    int wiek = 21;
    double srednia = 4.75;

    ss << "Student: " << imie << ", Wiek: " << wiek << ", Srednia: " << srednia;
    std::string wynikowyTekst = ss.str();
    std::cout << "Zlozony tekst: " << wynikowyTekst << std::endl;

    // 2. Parsowanie tekstu (odczyt ze strumienia)
    std::string daneDane = "100 3.14159 Programowanie";
    std::stringstream parser(daneDane);

    int liczbaInt;
    double liczbaDouble;
    std::string slowo;

    parser >> liczbaInt >> liczbaDouble >> slowo;

    std::cout << "\nSparsowane dane:" << std::endl;
    std::cout << "Int: " << liczbaInt << std::endl;
    std::cout << "Double: " << liczbaDouble << std::endl;
    std::cout << "String: " << slowo << std::endl;

    return 0;
}