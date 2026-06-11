#ifndef ZADKCPP_H
#define ZADKCPP_H

#include <string>

class ZadKcpp {
protected:
    std::string nazwaZadania;

public:
    ZadKcpp(std::string nazwa);
    virtual ~ZadKcpp();

    // Metoda czysto wirtualna - kazde zadanie musi ja nadpisac
    virtual void wykonajZadanie() = 0;
    std::string pobierzNazwe() const;
};

#endif // ZADKCPP_H
