#include <iostream>
#include <string>

// Przeciazenie dla liczb calkowitych
int suma(int x, int y) {
    return x + y; // Zwraca sume dwoch int
}

// Przeciazenie dla liczb zmiennoprzecinkowych
float suma(float x, float y) {
    return x + y; // Zwraca sume dwoch float
}

// Przeciazenie dla obiektow typu string
std::string suma(std::string f1, std::string f2) {
    return f1 + f2; // Wykonuje polaczenie (konkatenacje) napisow
}

int main() {
    // Wywolanie wersji dla int
    std::cout << "Wynik int:   " << suma(12, 13) << std::endl;

    // Wywolanie wersji dla float (litera f wymusza typ float)
    std::cout << "Wynik float: " << suma(2.5f, 3.5f) << std::endl;

    // Przygotowanie danych tekstowych
    std::string tekstA = "Kodowanie ";
    std::string tekstB = "w CPP";

    // Wywolanie wersji dla string
    std::cout << "Wynik napis: " << suma(tekstA, tekstB) << std::endl;

    return 0; // Pomyslne zakonczenie programu
}