#include <iostream>

int main() {
    std::cout << "Liczby nieparzyste z zakresu 1-20:" << std::endl;
    for (int i = 1; i <= 20; ++i) {
        if (i % 2 != 0) {
            std::cout << i << " ";
        }
    }

    std::cout << "\n\nLiczby podzielne przez 7 z zakresu 1-50:" << std::endl;
    for (int i = 1; i <= 50; ++i) {
        if (i % 7 == 0) {
            std::cout << i << " ";
        }
    }
    std::cout << std::endl;

    return 0;
}