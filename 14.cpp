Napisz program wczytujacy z klawiatury 5 liczb calkowitych. Wczytane liczby parzyste nalezy wypisac na ekranie.

Oczekiwany rezultat:

Wprowadz 5 liczb:
1
2
3
4
5
Liczby parzyste: 2, 4, 


#include <iostream>

int main() {
    // Inicjalizacja tablicy na wczytane liczby
    int liczby[5];

    // Wczytanie 5 liczb z klawiatury
    std::cout << "Wprowadz 5 liczb:\n";
    for (int i = 0; i < 5; ++i) {
        std::cin >> liczby[i];
    }

    // Wypisanie liczb parzystych
    std::cout << "Liczby parzyste: ";
    for (int i = 0; i < 5; ++i) {
        if (liczby[i] % 2 == 0) {
            std::cout << liczby[i];
            if (i < 4 && liczby[i + 2] % 2 == 0) {
                std::cout << ", ";
            }
        }
    }
    std::cout << std::endl;

    return 0;
}