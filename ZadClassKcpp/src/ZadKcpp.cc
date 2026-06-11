#include "../include/ZadKcpp.h"
#include <iostream>

ZadKcpp::ZadKcpp(std::string nazwa) : nazwaZadania(nazwa) {}

ZadKcpp::~ZadKcpp() {}

std::string ZadKcpp::pobierzNazwe() const {
    return nazwaZadania;
}
