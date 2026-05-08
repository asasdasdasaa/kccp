#include <iostream>

// Funkcja realizujaca zamiane wartosci dwoch zmiennych przy uzyciu ich adresow
void przelaczWartosci(int* wsk1, int* wsk2) {
    // Przechowanie wartosci wskazywanej przez pierwszy wskaznik w zmiennej buforowej
    int bufor = *wsk1; 
    
    // Nadpisanie wartosci pod pierwszym adresem wartoscia z drugiego adresu
    *wsk1 = *wsk2; 
    
    // Przypisanie zapamietanej wartosci bufora pod drugi adres
    *wsk2 = bufor; 
}

int main() {
    int wartoscA = 10;
    int wartoscB = 20;

    std::cout << "Stan poczatkowy: A = " << wartoscA << ", B = " << wartoscB << std::endl;

    // Wywolanie funkcji poprzez przekazanie adresow zmiennych (operator &)
    przelaczWartosci(&wartoscA, &wartoscB);

    std::cout << "Stan po modyfikacji: A = " << wartoscA << ", B = " << wartoscB << std::endl;

    return 0;
}