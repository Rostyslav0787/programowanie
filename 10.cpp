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
using namespace std;

int main() {
    const int iloscLiczb = 5;
    int liczby[iloscLiczb];

    cout << "Wprowadz " << iloscLiczb << " liczb:" << endl;

    // Wczytanie liczb
    for (int i = 0; i < iloscLiczb; ++i) {
        cin >> liczby[i];
    }

    // Wypisanie liczb parzystych
    cout << "Liczby parzyste: ";
    for (int i = 0; i < iloscLiczb; ++i) {
        if (liczby[i] % 2 == 0) {
            cout << liczby[i];
            if (i < iloscLiczb - 1 && liczby[i + 1] % 2 == 0) {
                cout << ", ";
            }
        }
    }
    cout << endl;

    return 0;
}