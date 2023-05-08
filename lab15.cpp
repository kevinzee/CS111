#include <iostream>
using namespace std;

bool containEven (int x){
        if (x % 2 == 0) return true;
        if (x < 10) return false;
        return containEven(x / 10);
}
void increaseDigit (int y){
        if (y <= 0) return;
        int ld = y % 10;
        increaseDigit(y / 10);
        int nd = y % 100 / 10;
        if (ld <= nd)
                cout << nd;
        else
                cout << ld;
}

int main(){
        increaseDigit(21);               //print 2
        increaseDigit(23);                //print 23
        increaseDigit(2);                  //print 2
        increaseDigit(44423);
	if (containEven(42))
                cout << "At least 1 even digit in 42" << endl;         //has output
        if (containEven(3))
                cout << "At least 1 even digit in 3" << endl;            //no output
        if (containEven(1213))
                cout << "At least 1 even digit in 1213" << endl;      //has output
        return 0;
}

