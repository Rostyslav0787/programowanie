#include <iostream>
using namespace std;

int main()
{
        // for(stanPoczatkowy; warunekKoncowy; krok)
        for(int i=0; i < 5; i++){
            cout << "Iteracja petli: " << i << endl;
       }
        
        for(int i=0; i < 5; i++){
            for(int j=0; j < 5; j++){
            	cout << "i:"<< i;
            	cout << "j:"<< j;
            }
            cout << endl;
       }
          
	
	cout << endl;
	system("pause");
}