#include <iostream>
using namespace std;

int main(){
	
	for (int i = 1; i <= 10; ++i){
	     for (int j = 1; j <= 10; ++j) {
	     	std::cout << i << " * " << j << " = " << (i * j) <<"\t";
		 }
		 std:: cout << std::endl;
	}
	return 0;	
}