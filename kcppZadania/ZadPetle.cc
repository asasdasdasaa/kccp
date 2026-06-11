#include <iostream>

void testWhile() {
    std::cout << "\n--- Test While ---" << std::endl;
    int i = 0;
    std::cout << "Post-inkrementacja w while (i++): ";
    while(i < 3) {
        std::cout << i++ << " "; // Wypisuje obecną wartość, potem zwiększa
    }
    
    i = 0;
    std::cout << "\nPre-inkrementacja w while (++i): ";
    while(i < 3) {
        std::cout << ++i << " "; // Najpierw zwiększa, potem wypisuje
    }
    std::cout << std::endl;
}

void testDoWhile() {
    std::cout << "\n--- Test Do-While ---" << std::endl;
    int i = 5;
    // Pętla wykona się raz pomimo niespełnienia warunku początkowego
    do {
        std::cout << "Blok wykonal sie chociaz i = " << i << std::endl;
        if (i == 5) break; // Przerwanie pętli
    } while (i < 3);
}

void testFor() {
    std::cout << "\n--- Test For z break i continue ---" << std::endl;
    for (int i = 1; i <= 5; ++i) {
        if (i == 2) {
            continue; // Pomija wypisanie liczby 2 i leci do następnego kroku
        }
        if (i == 5) {
            std::cout << "[break przy 5] ";
            break; // Całkowicie przerywa działanie pętli
        }
        std::cout << i << " ";
    }
    std::cout << std::endl;
}

int main() {
    testWhile();
    testDoWhile();
    testFor();
    return 0;
}