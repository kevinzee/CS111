#include <iostream>
using namespace std;

int main (){
	for (int i = 10; i <= 99; i++){
		if (i % 3 != 0 && i % 5 != 0) {
		       cout << i << " ";
		}
	}	
	cout << endl;
	return 0;
}
