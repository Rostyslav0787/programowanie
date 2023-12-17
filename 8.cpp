Zadanie polega na przeszukaniu tekstu w celu znalezienia nazwy pliku oraz jego rozszerzenia. Punktem charakterystycznym bedzie znalezienie pozycji kropki oraz od razu po tej kropce znajduje sie jakis znak rozny od spacji, poniewaz jezeli bedzie spacja oznaczac to bedzie iz po kkropce znajduje sie koniec zdania. Aby to zrobic najpierw nalezy znalezc pozycje kilku punkktow chharakterystycznych, po ktorych bedziemy sie poruszac. Ponizej zostaly przedstawione wymagane pozycje do wyswietlenia:

Pozycja konca tekstu,
pozycja kropki (po ktorej znajduje sie znak rozny od spacji),
pozycja poczatku nazwy pliku.
Wykorzystujac zebrane powyzej pozycje mozemy zapisac teraz zapisac nazwe i rozszerzenie.

Nazwa pliku,
rozszerzenie.
Przykladowy tekst wprowadzany:

Tekst. nazwa.cpp tekst



#include <iostream>
#include <cstring>
using namespace std;

int main() {
    const int maxDlugosc = 200;
    char tekst[maxDlugosc];

    cout << "Wprowadz tekst: ";
    cin.getline(tekst, maxDlugosc);

    int pozycjaKonca = -1;
    int pozycjaKropki = -1;
    int pozycjaPoczatkuNazwy = -1;

    // Znalezienie pozycji konca tekstu
    for (int i = 0; i < strlen(tekst); ++i) {
        if (tekst[i] == '\0' && pozycjaKonca == -1) {
            pozycjaKonca = i;
        }
    }

    // Znalezienie pozycji kropki
    for (int i = 0; i < strlen(tekst); ++i) {
        if (tekst[i] == '.' && i + 1 < strlen(tekst) && tekst[i + 1] != ' ') {
            pozycjaKropki = i;
            break;
        }
    }

    // Znalezienie pozycji poczatku nazwy pliku
    if (pozycjaKropki != -1) {
        for (int i = pozycjaKropki; i >= 0; --i) {
            if (tekst[i] == ' ') {
                pozycjaPoczatkuNazwy = i + 1;
                break;
            }
        }
    }

    // Wypisanie pozycji
    cout << "Pozycja konca tekstu: " << pozycjaKonca << endl;
    cout << "Pozycja kropki: " << pozycjaKropki << endl;
    cout << "Pozycja poczatku nazwy pliku: " << pozycjaPoczatkuNazwy << endl;

    // Wypisanie nazwy pliku i rozszerzenia
    if (pozycjaKropki != -1 && pozycjaPoczatkuNazwy != -1) {
        cout << "Nazwa pliku: ";
        for (int i = pozycjaPoczatkuNazwy; i < pozycjaKropki; ++i) {
            cout << tekst[i];
        }
        cout << endl;

        cout << "Rozszerzenie: ";
        for (int i = pozycjaKropki + 1; i < pozycjaKonca; ++i) {
            cout << tekst[i];
        }
        cout << endl;
    }

    return 0;
}