Napisz program wczytujacy z klawiatury 5 liczb calkowitych. Wczytane liczby ujemne nalezy zastapic zerami, nastepnie wypisac wszystkie na ekranie.

Oczekiwany rezultat:

Wprowadz 5 liczb dodanich i ujemnych: 
4
-8
6
-2
7
Liczby ujemne zamienione na 0: 4, 0, 6, 0, 7,



#include <iostream>
#include <vector>

int main() {
    // Inicjalizacja wektora na liczby
    std::vector<int> liczby;

    // Wczytanie 5 liczb z klawiatury
    std::cout << "Wprowadz 5 liczb dodatnich i ujemnych:\n";
    for (int i = 0; i < 5; ++i) {
        int liczba;
        std::cin >> liczba;

        // Zamiana liczby ujemnej na 0
        if (liczba < 0) {
            liczba = 0;
        }

        liczby.push_back(liczba);
    }

    // Wypisanie liczb po ewentualnej zamianie ujemnych na 0
    std::cout << "Liczby ujemne zamienione na 0: ";
    for (int i = 0; i < 5; ++i) {
        std::cout << liczby[i];
        if (i < 4) {
            std::cout << ", ";
        }
    }
    std::cout << std::endl;

    return 0;
}
