Napisz program wyswietlajacy tablice o rozmiarze 3 wierszy oraz 5 kolumn. Wypelniona automatycznie kolejnymi wartosciami poczawszy od liczby 1 do n.

Oczekiwany rezultat:

1 2 3 4 5 
6 7 8 9 10
11 12 13 14 15

#include <iostream>

int main() {
    // Stale definiujace rozmiar tablicy
    const int wiersze = 3;
    const int kolumny = 5;

    // Zmienna do przechowywania kolejnych wartosci
    int wartosc = 1;

    // Tworzenie i wypelnianie tablicy
    int tablica[wiersze][kolumny];
    for (int i = 0; i < wiersze; ++i) {
        for (int j = 0; j < kolumny; ++j) {
            tablica[i][j] = wartosc;
            ++wartosc;
        }
    }

    // Wypisywanie tablicy
    for (int i = 0; i < wiersze; ++i) {
        for (int j = 0; j < kolumny; ++j) {
            std::cout << tablica[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
