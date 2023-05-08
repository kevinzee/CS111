#include <iostream>
using namespace std;

double min2(double a, double b){
	if (a < b) return a;
	else return b;
}

int largestDigit(int x){
	int max = 0;
	if (x <= 0) return 0;
        while (x > 0){
                if (x % 10 > max) max = x % 10;
                x /= 10;
        }
        return max;
}

bool isPositive(int z){
	if (z > 0) return true;
	else return false;
}

void mystery(int j, char k, char l, char m){
}

int main(){
	int x = 200, y = 119, z;   
  	double a = 6.4, b = 5.6;
  	cout << "Smaller of " << a << " and " << b << " is " << min2(a, b) << endl;
  	cout << "Please enter a number: ";
  	cin >> z;
  	if (isPositive(z)) cout << "It's a positive number." << endl;
  	if (min2(x,z) != z) cout << "Your input is greater than 200!." << endl;
  	int d = largestDigit(y);
  	if (d >= 1) cout << y << "'s largest digit is  " << d << endl;
  	mystery(2, z, z, b);
  	return 0;
}
