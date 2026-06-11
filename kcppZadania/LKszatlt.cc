#include <iostream>

void trojkatRownoramienny(int h) {
    std::cout << "\nTrojkat rownoramienny:\n";
    for (int i = 1; i <= h; ++i) {
        // Spacje wyrównujące do lewej
        for (int j = 1; j <= h - i; ++j) std::cout << " ";
        // Gwiazdki
        for (int k = 1; k <= (2 * i - 1); ++k) std::cout << "*";
        std::cout << std::endl;
    }
}

void piramidaLiczb(int h) {
    std::cout << "\nPiramida liczbowa:\n";
    for (int i = 1; i <= h; ++i) {
        for (int j = 1; j <= i; ++j) {
            std::cout << i << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    int wysokosc = 4;
    trojkatRownoramienny(wysokosc);
    piramidaLiczb(wysokosc);
    return 0;
}