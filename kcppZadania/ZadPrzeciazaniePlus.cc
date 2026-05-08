#include <iostream>

// Klasa reprezentujaca punkt na plaszczyznie
class Punkt {
public:
    double x, y; // Wspolrzedne punktu

    // Konstruktor inicjalizujacy wspolrzedne (domyslnie 0)
    Punkt(double _x = 0, double _y = 0) : x(_x), y(_y) {}

    // Przeciazenie operatora dodawania (+)
    Punkt operator+(const Punkt& inny) {
        Punkt temp;
        temp.x = this->x + inny.x; // Sumowanie wspolrzednych X
        temp.y = this->y + inny.y; // Sumowanie wspolrzednych Y
        return temp;               // Zwrot nowego obiektu wynikowego
    }
};

int main() {
    Punkt pA(2.0, 3.0); // Tworzenie pierwszego punktu
    Punkt pB(1.0, 4.0); // Tworzenie drugiego punktu

    // Uzycie przeciazonego operatora +
    Punkt pC = pA + pB; 

    // Wypisanie wynikow na ekran
    std::cout << "Punkt A: (" << pA.x << ", " << pA.y << ")" << std::endl;
    std::cout << "Punkt B: (" << pB.x << ", " << pB.y << ")" << std::endl;
    std::cout << "Suma:    (" << pC.x << ", " << pC.y << ")" << std::endl;

    return 0; // Koniec programu
}