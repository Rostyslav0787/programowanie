#include<iostream>
using namespace std;

int main()
{
	short a, b;
	cout << "Podaj a: ";
	cin >>a;
	cout << "Podaj b: ";
	cin >>b;
	
	if(a > b){
		cout << "a > b";
	}
	else{
		cout << "a < b";
	}
}