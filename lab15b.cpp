#include <iostream>
using namespace std;

int main(){
	float avg, sum = 0.0;
	double num[15];
	cout << "Enter 15 decimal numbers: ";
	for (int i = 0; i < 15; i++){
		cin >> num[i];
		sum += num[i];
	}
		avg = sum / 15;
		cout << "The average of your numbers is " << avg << endl;
	return 0;
}
