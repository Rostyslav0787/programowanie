Zadanie 4* - Zamiana malych liter na duze
Napisz program, ktory pobierze od uzytkownika trzy zdania oraz wyswietli je w odwrotnej kolejnosci, zamieniajac wszystkie male litery (tylko angielskie)** na duze.

Wskazowka:
Warto zauwazyc, ze numery ASCII malych liter mieszcza sie w przedziale [97; 122]. Roznica miedzy malymi i duzymi literami wynosi 32. Bedziemy sprawdzac kazdy znak, czy jest to mala litera. Gdy bedzie spelniony warunek przesuniemy ja o 32 numery w dol aby przeskoczyc na duza litere. Do przechowania zdan uzyjemy tablicy dwuwymiarowej. Pierwszy wymiar okresla numer zdania, natomiast drugi, ilosc znakow, ktora bedzie zapisywania (np.100).

Oczekiwany rezultat:

Podaj 1 zdanie: Pierwsze
Podaj 2 zdanie: Drugie
Podaj 3 zdanie: Trzecie
TRZECIE
DRUGIE
PIERWSZE


#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;

const int maxIloscZdan = 3;
const int maxDlugoscZdania = 100;

int main() {
    char zdania[maxIloscZdan][maxDlugoscZdania];

    for (int i = 0; i < maxIloscZdan; ++i) {
        cout << "Podaj " << i + 1 << " zdanie: ";
        cin.getline(zdania[i], maxDlugoscZdania);

        // Zamiana malych liter na duze
        for (int j = 0; j < strlen(zdania[i]); ++j) {
            if (islower(zdania[i][j])) {
                zdania[i][j] = toupper(zdania[i][j]);
            }
        }
    }

    // Wyswietlenie zdan w odwrotnej kolejnosci
    for (int i = maxIloscZdan - 1; i >= 0; --i) {
        cout << zdania[i] << endl;
    }

    return 0;
}