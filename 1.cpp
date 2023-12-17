#include <iostream>
using namespace std;

// Deklaracja funkcji
void Przywitanie(const string& imie, const string& nazwisko);

int main()
{
    string imie, nazwisko;
    cout << "Podaj swoje imie: ";
    cin >> imie;
    cout << "Podaj swoje nazwisko: ";
    cin >> nazwisko;
    Przywitanie(imie, nazwisko);

    return 0;
}

// Implementacja funkcji Przywitanie
void Przywitanie(const string& imie, const string& nazwisko)
{
    cout << "Witaj, " << imie << " " << nazwisko << "!" << endl;
}










/Zadanie polega na zaimplementowaniu funkcji Przywitanie(), ktora wyswietli przywitanie uzytkownika wyorzystujac jego imie i nazwisko.

/#include <iostream>
/using namespace std;

/int main()
/{   
    string imie, nazwisko;
    cout << "Podaj swoje imie: ";
    cin >> imie;
    cout << "Podaj swoje nazwisko: ";
    cin >> nazwisko;
    Przywitanie(imie, nazwisko);
/}