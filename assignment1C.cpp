#include <iostream>
using namespace std;

int main(){
	int n, odd = 0;
	cout << "Please enter a positive number: ";
	cin >> n;
	while (n != 0){
		int rem = n % 10;
		if (rem % 2 == 1)
			odd++;
		n /= 10;
	}
	cout << "There is " << odd << " odd digits in your number!" << endl;
	return 0;
}
