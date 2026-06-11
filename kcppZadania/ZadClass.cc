#include <iostream>
#include <string>

class KontoBankowe {
private:
    std::string pin;
    double saldo;

    bool zweryfikujPIN(std::string podanyPIN);

protected:
    void RejestrujLog(std::string wiadomosc);

public:
    KontoBankowe(std::string startPIN, double startSaldo);
    
    void wplacPieniadze(double kwota);                    
    void wyplacPieniadze(double kwota, std::string podanyPIN);
    double pobierzSaldo() const; 
};

KontoBankowe::KontoBankowe(std::string startPIN, double startSaldo) {
    pin = startPIN;
    saldo = startSaldo;
}

void KontoBankowe::wplacPieniadze(double kwota) {
    if (kwota > 0) {
        saldo += kwota;
        RejestrujLog("Wplacono: " + std::to_string(kwota));
    }
}

void KontoBankowe::wyplacPieniadze(double kwota, std::string podanyPIN) {
    if (zweryfikujPIN(podanyPIN)) {
        if (saldo >= kwota) {
            saldo -= kwota;
            RejestrujLog("Wyplacono: " + std::to_string(kwota));
        } else {
            RejestrujLog("Blad: Brak srodkow");
        }
    } else {
        std::cout << "ODMOWA DOSTEPU: Bledny PIN!\n";
    }
}

double KontoBankowe::pobierzSaldo() const {
    return saldo;
}

void KontoBankowe::RejestrujLog(std::string wiadomosc) {
    std::cout << "[LOG BANCOWY]: " << wiadomosc << "\n";
}

bool KontoBankowe::zweryfikujPIN(std::string podanyPIN) {
    return pin == podanyPIN;
}

int main() {
    KontoBankowe mojeKonto("1234", 1000.0);

    mojeKonto.wplacPieniadze(500);
    mojeKonto.wyplacPieniadze(200, "1234");
    mojeKonto.wyplacPieniadze(100, "9999");
    
    std::cout << "Stan konta: " << mojeKonto.pobierzSaldo() << " PLN\n";

    return 0;
}