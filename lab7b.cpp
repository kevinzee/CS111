#include <iostream>
using namespace std;

int main (){
	int i, n;
	
	cout << "Enter any positive integer to check its factors: " << endl;
	cin >> n;

	cout << "The factors of " << n << " are: ";
	for (i = 2; i < n; i++){
		if (n % i == 0)
		{
			cout << i << ", ";
		}
	}
	cout << endl;	
	return 0;
}
