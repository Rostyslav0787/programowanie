Napisac funcje Brutto(), ktora po jej wywolaniu z parametrem kwoty netto zwroci nam obliczona kwote "Brutto". Oraz analogicznie zaimplementowac funkcje Netto(), ktora z parametrem brutto zwroci kwote "Netto".

#include <iostream>
using namespace std;

int main()
{
    int wybor;
    float netto, brutto;
    cout << "Ktora kwote chcesz obliczyc? \n 1. Brutto \n 2. Netto" << endl;
    cin >> wybor;

    switch(wybor)
    {
        case 1:
            cout << "Podaj kwote netto: ";
            cin >> netto;
            cout << "Brutto: " << Brutto(netto) << " zl" << endl;
            break;
        case 2:
            cout << "Podaj kwote brutto: ";
            cin >> brutto;
            cout << "Netto: " << Netto(brutto) << " zl" << endl;
            break;
    }
}