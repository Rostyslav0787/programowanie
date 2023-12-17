Napisz program wczytujacy z klawiatury 5 liczb calkowitych. Wczytane liczby nalezy wypisac na ekranie w odwrotnej kolejnosci.

Oczekiwany rezultat:

Wprowadz 5 liczb: 
1
2
3
4
5
W odwrotnej kolejnosci: 5, 4, 3, 2, 1,


#include <iostream>

int main() {
    // Inicjalizacja tablicy na wczytane liczby
    int liczby[5];

    // Wczytanie 5 liczb z klawiatury
    std::cout << "Wprowadz 5 liczb:\n";
    for (int i = 0; i < 5; ++i) {
        std::cin >> liczby[i];
    }

    // Wypisanie liczb w odwrotnej kolejnosci
    std::cout << "W odwrotnej kolejnosci: ";
    for (int i = 4; i >= 0; --i) {
        std::cout << liczby[i];
        if (i > 0) {
            std::cout << ", ";
        }
    }
    std::cout << std::endl;

    return 0;
}


