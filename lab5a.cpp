#include <iostream>
using namespace std;

int main(){ 
	int i;
	cout << "Enter a number between 100 and 2000 that is a multiple of 2: " << endl;
	cin >> i;
	while (i % 2 != 0 || i < 100 || i > 2000 ){
			cout << "Wrong! Try entering a number between 100 and 2000 that is a multiple of 2: " << endl;
			cin >> i;
		}
	if (i % 2 == 0 && i >= 100 && i <= 2000){
		cout << "Correct! The number " << i << " is a multiple of 2 between 100 and 2000!" << endl;
	}
	cout << endl;
	return 0;
}
