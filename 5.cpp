„Za malo za duzo” — prosze napisac program pozwalajacy uzytkownikowi na odgadniecie liczby wylosowanej przez komputer. Program losuje nieznana uzytkownikowi liczbe (zakladamy np. przedzial 1..100), uzytkownik typuje liczbe, program odpowiada uzytkownikowi czy to dobra liczba, czy tez za mala, lub za duza. Gra trwa tak dlugo, az uzytkownik odgadnie wylosowana liczbe.

Zadanie polega na zaimplementowaniu dwoch funkcji DuzaMala(), CheckLiczba() uzytych w funkcji main() tab aby program spelnial wyzej wymienione zalozenia.

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

// Deklaracje funkcji
void DuzaMala(int typowanaLiczba, int wylosowanaLiczba);
bool CheckLiczba(int typowanaLiczba, int wylosowanaLiczba);

int main()
{
    srand(time(NULL));
    int wylosowanaLiczba = (rand() % 99) + 1;

    int liczba;
    do
    {
        cout << "Podaj liczbe: ";
        cin >> liczba;

        DuzaMala(liczba, wylosowanaLiczba);

    } while (!(CheckLiczba(liczba, wylosowanaLiczba)));

    cout << "Gratulacje! Zgadles liczbe." << endl;

    return 0;
}

// Implementacja funkcji DuzaMala
void DuzaMala(int typowanaLiczba, int wylosowanaLiczba)
{
    if (typowanaLiczba < wylosowanaLiczba)
    {
        cout << "Za mala liczba. Sprobuj jeszcze raz." << endl;
    }
    else if (typowanaLiczba > wylosowanaLiczba)
    {
        cout << "Za duza liczba. Sprobuj jeszcze raz." << endl;
    }
    else
    {
        cout << "Brawo! Zgadles liczbe." << endl;
    }
}

// Implementacja funkcji CheckLiczba
bool CheckLiczba(int typowanaLiczba, int wylosowanaLiczba)
{
    return (typowanaLiczba == wylosowanaLiczba);
}