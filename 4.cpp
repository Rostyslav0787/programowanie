Zadanie polega na stworzeniu 3 funkcji:

SprawdzWymiary(), ktora po sprawdzeniu 3 warunkow, zwroci informacje czy paczka o parametrach podanych przez uzytkownika wejdzie do malej skrytki, duzej skrytki albo nie zmiesci sie do paczkomatu.
MalaSkrytka() oraz DuzaSkrytka(), nastepujace funkcje maja sprawdzac wymiary paczki czy sa zgodne zwracajac wartosc true lub false. Funkcje powinny zostac uzyte w funkcji SprawdzWymiary().
#include <iostream>
using namespace std;

// Deklaracje funkcji
void SprawdzWymiary(float szer, float wys);
bool MalaSkrytka(float width, float height);
bool DuzaSkrytka(float width, float height);

int main()
{
    float szerokosc, wysokosc;
    cout << "Podaj wymiary paczki" << endl;
    cout << "Szerokosc (cm): ";
    cin >> szerokosc;
    cout << "Wysokosc (cm): ";
    cin >> wysokosc;
    SprawdzWymiary(szerokosc, wysokosc);

    return 0;
}

// Implementacja funkcji SprawdzWymiary
void SprawdzWymiary(float szer, float wys)
{
    if (MalaSkrytka(szer, wys))
    {
        cout << "Paczka miesci sie w malej skrytce." << endl;
    }
    else if (DuzaSkrytka(szer, wys))
    {
        cout << "Paczka miesci sie w duzej skrytce." << endl;
    }
    else
    {
        cout << "Paczka nie miesci sie w zadnej skrytce paczkomatu." << endl;
    }
}

// Implementacja funkcji MalaSkrytka
bool MalaSkrytka(float width, float height)
{
    // Sprawdzenie warunkow dla malej skrytki
    return (width <= 30.0 && height <= 30.0);
}

// Implementacja funkcji DuzaSkrytka
bool DuzaSkrytka(float width, float height)
{
    // Sprawdzenie warunkow dla duzej skrytki
    return (width <= 60.0 && height <= 60.0);
}