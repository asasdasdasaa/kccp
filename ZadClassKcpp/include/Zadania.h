#ifndef ZADANIA_H
#define ZADANIA_H

#include "ZadKcpp.h"
#include <string>

// Pomocnicza klasa Punkt dla zadania z operatorem +
class Punkt {
public:
    int x, y;
    Punkt(int px = 0, int py = 0) : x(px), y(py) {}
    Punkt operator+(const Punkt& inny) const;
};

// 1. Zadanie 1.1: Klasa Samochod
class Zadanie1 : public ZadKcpp {
public:
    Zadanie1();
    void wykonajZadanie() override;
};

// 2. Zadanie 1.2: cstring funkcje
class Zadanie2 : public ZadKcpp {
public:
    Zadanie2();
    void wykonajZadanie() override;
};

// 3. Zadanie 1.3: Klasa string i operacje
class Zadanie3 : public ZadKcpp {
public:
    Zadanie3();
    void wykonajZadanie() override;
};

// 4. Zadanie 2.1: Zwracanie wartosci, ref, wsk
class Zadanie4 : public ZadKcpp {
public:
    Zadanie4();
    void wykonajZadanie() override;
};

// 5. Zadanie 2.2: Przeciazanie funkcji Pole
class Zadanie5 : public ZadKcpp {
public:
    Zadanie5();
    void wykonajZadanie() override;
};

// 6. Zadanie 2.3: Przeciazanie funkcji Dodaj
class Zadanie6 : public ZadKcpp {
public:
    Zadanie6();
    void wykonajZadanie() override;
};

// 7. Zadanie 2.4: Przeciazanie operatora +
class Zadanie7 : public ZadKcpp {
public:
    Zadanie7();
    void wykonajZadanie() override;
};

// 8. Zadanie 4.1: Manipulacja strumieniem cout
class Zadanie8 : public ZadKcpp {
public:
    Zadanie8();
    void wykonajZadanie() override;
};

// 9. Zadanie 5.2: Struktura Ksiazka
class Zadanie9 : public ZadKcpp {
public:
    Zadanie9();
    void wykonajZadanie() override;
};

// 10. Zadanie 5.6: Metody abstrakcyjne i figury [OBOWIAZKOWE]
class Zadanie10 : public ZadKcpp {
public:
    Zadanie10();
    void wykonajZadanie() override;
};

#endif // ZADANIA_H
