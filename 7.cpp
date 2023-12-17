Zamiana znakow
Wykorzystujac metode cin.getline() pobrac od uzytkownika tekst o maksymalnej dlugosci 200 znakow.
W miejscu spacji oraz kropki wstawic znak -
Wyswietlic zmieniony tekst
Oczekiwany rezultat:

Podaj tekst o maksymalnej dlugosci 200 znakow: It is a long established fact that a reader will be distracted by the readable content of a page when looking at its layout. The point of using Lorem Ipsum is that it has 
a more-or-less normal distribution of letters.

Zmodyfikowany wyraz: It-is-a-long-established-fact-that-a-reader-will-be-distracted-by-the-readable-content-of-a-page-when-looking-at-its-layout--The-point-of-using-Lorem-Ipsum-is-that-it-has-a-more-or-less-normal-distri

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    const int maxDlugosc = 200;
    char tekst[maxDlugosc];

    cout << "Podaj tekst o maksymalnej dlugosci " << maxDlugosc << " znakow: ";
    cin.getline(tekst, maxDlugosc);

    // Zamiana spacji na znak '-'
    for (int i = 0; i < strlen(tekst); ++i) {
        if (tekst[i] == ' ') {
            tekst[i] = '-';
        }
        // Zamiana kropki na znak '-'
        else if (tekst[i] == '.') {
            tekst[i] = '-';
        }
    }

    cout << "Zmodyfikowany wyraz: " << tekst << endl;

    return 0;
}