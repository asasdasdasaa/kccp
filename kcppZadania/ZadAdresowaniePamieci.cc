/**
 * Wyjaśnienie kierunku adresowania:
 * W architekturze systemów x86/x64 stos (miejsce gdzie lądują zmienne lokalne a, b, c) 
 * rośnie zazwyczaj w dół pamięci. 
 * Oznacza to, że pierwsza zmienna (a) ma najwyższy adres, a kolejne (b, c) coraz niższe.
 * * Dlatego w tym programie:
 * 1. &a + 1 przesuwa nas pod adres WYŻSZY (tam gdzie w pamięci "wcześniej" leżało b).
 * 2. &c - 1 przesuwa nas pod adres NIŻSZY.
 * * UWAGA: To zachowanie zależy od kompilatora i optymalizacji. Kompilator może 
 * ułożyć zmienne w innej kolejności, jeśli uzna to za wydajniejsze.
 */
#include <iostream>
#include <sstream>
#include <string>
#include <cmath>
#include <cstdint>

using namespace std;

// Funkcja pomocnicza do zamiany formatu szesnastkowego na dziesietny
unsigned long hexNaDec(string tekstHex) {
    unsigned long suma = 0;
    for (unsigned int i = 0; i < tekstHex.length(); i++) {
        if (tekstHex[i] >= '0' && tekstHex[i] <= '9') {
            suma += (tekstHex[i] - '0') * pow(16, tekstHex.length() - i - 1);
        } else if (tekstHex[i] >= 'A' && tekstHex[i] <= 'F') {
            suma += (tekstHex[i] - 'A' + 10) * pow(16, tekstHex.length() - i - 1);
        } else if (tekstHex[i] >= 'a' && tekstHex[i] <= 'f') {
            suma += (tekstHex[i] - 'a' + 10) * pow(16, tekstHex.length() - i - 1);
        }
    }
    return suma;
}

int main() {
    int v1 = 0, v2 = 0, v3 = 0;
    
    // Konwersja adresow na typ numeryczny dla latwiejszej analizy
    uintptr_t lokacja1 = reinterpret_cast<uintptr_t>(&v1);
    uintptr_t lokacja2 = reinterpret_cast<uintptr_t>(&v2);
    uintptr_t lokacja3 = reinterpret_cast<uintptr_t>(&v3);

    cout << "Adres zmiennej 1: " << &v1 << " (DEC: " << lokacja1 << ")" << endl;
    cout << "Adres zmiennej 2: " << &v2 << " (DEC: " << lokacja2 << ")" << endl;
    cout << "Adres zmiennej 3: " << &v3 << " (DEC: " << lokacja3 << ")" << endl;

    return 0;
}