#include <iostream>
#include <string>

using namespace std;

int main() {
    // Rozne sposoby inicjalizacji obiektow string
    string s1 = "Programowanie";
    string s2(5, 'A'); // Tworzy napis "AAAAA"
    
    cout << "--- Metody klasy std::string ---" << endl;

    string s = "Programowanie obiektowe";

    // 1. empty() - Zwraca prawde, jesli dlugosc wynosi 0
    cout << "Czy pusty: " << (s.empty() ? "Tak" : "Nie") << endl;

    // 2. size() - Zwraca liczbe znakow w napisie
    cout << "Dlugosc:   " << s.size() << endl;

    // 3. at() - Dostep do znaku z weryfikacja zakresu (bezpieczniejszy niz [])
    cout << "Znak [0]:  " << s.at(0) << endl;

    // 4. append() - Dodaje tekst na koncu istniejacego napisu
    s.append(" w CPP");
    cout << "Po append: " << s << endl;

    // 5. find() - Szuka podciagu, zwraca indeks lub string::npos
    size_t pos = s.find("obiektowe");
    if (pos != string::npos) {
        cout << "Znaleziono 'obiektowe' na pozycji: " << pos << endl;
    }

    // 6. substr() - Wycina fragment (od indeksu, liczba znakow)
    string fragment = s.substr(0, 13);
    cout << "Fragment:  " << fragment << endl;

    // 7. erase() - Usuwa fragment tekstu (od indeksu, liczba znakow)
    s.erase(0, 14); 
    cout << "Po erase:  " << s << endl;

    // 8. replace() - Zamienia fragment tekstu na inny
    s.replace(0, 8, "Nowy tekst");
    cout << "Po replace: " << s << endl;

    // 9. clear() - Czysci cala zawartosc napisu
    s.clear();
    cout << "Po clear (rozmiar): " << s.size() << endl;

    return 0;
}