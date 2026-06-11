#include <iostream>

long long obliczSilnie(int k) {
    long long s = 1;
    for (int i = 1; i <= k; ++i) {
        s *= i;
    }
    return s;
}

int main() {
    int n;
    std::cout << "Podaj liczbe n: ";
    std::cin >> n;

    if (n < 0) {
        std::cerr << "Blad: Silnia nie istnieje dla liczb ujemnych!" << std::endl;
        return 1;
    }

    long long sumaSilni = 0;
    for (int i = 1; i <= n; ++i) {
        sumaSilni += obliczSilnie(i);
    }

    std::cout << "Suma silni od 1 do " << n << " wynosi: " << sumaSilni << std::endl;
    return 0;
}