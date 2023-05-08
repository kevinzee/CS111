#include <iostream>
using namespace std;

int main (){
	int n, d;
	bool prime = true;
	cout << "Enter a number greater than 1: ";
	cin >> n;
	if (n == 0 || n == 1){
		prime = false;
	}
	for ( d = 2; d <= n/2; d++){
		if (n % d == 0){
			prime = false;
			break;
		}
	} 
	if (prime)
		cout << n << " is a prime number";
	else
    		cout << n << " is not a prime number! Try again: " << endl;
		cin >> n;
	
	return 0;
}
