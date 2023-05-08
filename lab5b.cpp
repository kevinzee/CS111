#include <iostream>
using namespace std;

int main (){
        int x;
        cout << "Enter a positive number: ";
        cin >> x;
        while(x > 9){
                x /= 10;
        }
        cout << "Your number is " << x << endl;

        return 0;
}

