#include <iostream>

int main() {
    int szerokosc, wysokosc;
    std::cout << "Podaj szerokosc : ";
    std::cin >> szerokosc;
    std::cout << "Podaj wysokosc : ";
    std::cin >> wysokosc;

    for (int i = 0; i < wysokosc; ++i) {
        for (int j = 0; j < szerokosc; ++j) {
            if (i == 0 || i == wysokosc - 1 || j == 0 || j == szerokosc - 1) {
                std::cout << "* ";
            } else {
                std::cout << "# ";
            }
        }
        std::cout << std::endl;  
    }

    return 0;
}