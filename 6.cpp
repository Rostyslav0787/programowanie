Wykorzystujac metode cin.getline() pobrac od uzytkownika imie i nazwisko a nastepnie a nastepnie znalezc pozycje znaku spacji oraz znaku konca tekstu (\0). Na koniec wyswietlic indeksy tych dwoch znakow.

Oczekiwany rezultat:

Twoje dane osobowe: Jakub Piskorowski
Pozycja spacji: 5
Pozycja konca: 17

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    const int maxDlugosc = 100;
    char daneOsobowe[maxDlugosc];

    cout << "Podaj imie i nazwisko: ";
    cin.getline(daneOsobowe, maxDlugosc);

    int pozycjaSpacji = -1;
    int pozycjaKonca = -1;

    // Znalezienie pozycji spacji i konca tekstu (\0)
    for (int i = 0; i < strlen(daneOsobowe); ++i) {
        if (daneOsobowe[i] == ' ' && pozycjaSpacji == -1) {
            pozycjaSpacji = i;
        }
        if (daneOsobowe[i] == '\0' && pozycjaKonca == -1) {
            pozycjaKonca = i;
        }
    }

    cout << "Twoje dane osobowe: " << daneOsobowe << endl;
    cout << "Pozycja spacji: " << pozycjaSpacji << endl;
    cout << "Pozycja konca: " << pozycjaKonca << endl;

    return 0;
}