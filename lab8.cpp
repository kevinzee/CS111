#include <iostream>
using namespace std;

int main (){
	int d, counter = d - 1;
	cout << "Enter the size of your dimensions: ";
	cin >> d;
	for (int r = 0; r < d; r++){
		for (int c = 0; c < d; c++){
			if (r == 0 || r + c == d || r == d - 1)
				cout << "*";
			else
				cout << " ";
		}
		counter--;
		cout << endl;
	}

	return 0;
}
