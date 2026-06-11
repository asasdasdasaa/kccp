#include <iostream>

// DEKLARACJA UNII
// Unia reprezentuje jeden odczyt z wielofunkcyjnego czujnika.
// Może przechowywać tylko jedna z tych wartości w danym momencie.
union DaneCzujnika {
    double temperatura; // np. 24.5 stopnia (8 bajtów)
    int statusAlarmu;   // np. 1 - pożar, 0 - bezpiecznie (4 bajty)
    char kodBledu;      // np. 'E' jak Error (1 bajt)
};

int main() {
    std::cout << "=== Alternatywny test Unii: System Inteligentnego Domu ===" << std::endl;

    DaneCzujnika czujnik;

    //Poprawne użycie czujnika temperatury
    std::cout << "\n--- Scenariusz A: Czujnik mierzy temperature ---" << std::endl;
    czujnik.temperatura = 21.8; // Zapisujemy double
    std::cout << "Odczyt temperatury: " << czujnik.temperatura << " st. C" << std::endl;


    // Niebezpieczeństwo i błąd (Fałszywy alarm)
    std::cout << "\n--- Scenariusz B: NIEBEZPIECZENSTWO (Bledny odczyt) ---" << std::endl;
    
    // W unii nadal leży zapisana przed chwilą temperatura (21.8).
    // Co się stanie, jeśli centrala alarmowa dostanie błąd w programie 
    // i spróbuje odczytać ten obszar pamięci jako 'statusAlarmu'?
    
    std::cout << "W pamieci jest zapisana temperatura, ale czyta ja jako status alarmu!" << std::endl;
    std::cout << "Wylosowany stan alarmu z bitow temperatury: " << czujnik.statusAlarmu << std::endl;

    if (czujnik.statusAlarmu != 0) {
        std::cout << "[ALARM] Wykryto zagrozenie! (Blad systemu: zinterpretowano bity typu double jako int)" << std::endl;
    }


    
    //Nadpisanie danych
    std::cout << "\n--- Scenariusz C: Nadpisanie pamieci ---" << std::endl;
    
    //Czujnik uległ awarii i zapisuje kod błędu 'E'
    czujnik.kodBledu = 'E';
    std::cout << "Czujnik zglosil kod bledu: " << czujnik.kodBledu << std::endl;

    // Próba odczytania temperatury po tym, jak zapisano kod błędu:
    std::cout << "[BLAD] Odczyt temperatury po awarii czujnika: " << czujnik.temperatura << " st. C" << std::endl;

    return 0;
}