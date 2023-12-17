Napisz funcje MaxFun() do ktorej przekazesz tablice z 5 liczbami calkkowitymi podanymi przez uzytkkownika. Funkcja ma przechodzic po elementach tablicy i zwrocic najwieksza wartosc z tablicy.

#include <iostream>
using namespace std;

// Deklaracja funkcji
int MaxFun(const int tablica[], int rozmiar);

int main()
{
    int liczby[5];
    cout << "Podaj 5 liczb: ";
    
    for(int i=0; i<5; i++)
        cin >> liczby[i];
    
    cout << "Najwieksza liczba: " << MaxFun(liczby, 5) << endl;

    system("pause");
    return 0;
}

// Implementacja funkcji MaxFun
int MaxFun(const int tablica[], int rozmiar)
{
    if (rozmiar <= 0)
    {
        // Obsluga przypadku pustej tablicy
        cerr << "Blad: Pusta tablica." << endl;
        return 0;
    }

    int maksimum = tablica[0];

    for (int i = 1; i < rozmiar; i++)
    {
        if (tablica[i] > maksimum)
        {
            maksimum = tablica[i];
        }
    }

    return maksimum;
}