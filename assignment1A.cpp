#include <iostream>
using namespace std;

int main (){
	double i;
	cout << "Enter a score out of 100: " << endl;
	cin >> i;
	if (i >= 90)
		cout << "A" << endl;
	else if (i >= 80 && i < 90)
		cout << "B" << endl;
	else if (i >= 70 && i < 80)
		cout << "C" << endl;
	else if (i >= 60 && i < 70)
		cout << "D" << endl;
	else 
		cout << "F" << endl;
	return 0;
}
