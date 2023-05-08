#include <iostream>
using namespace std;

int main()
{
    int n, total;
    total = 0;
    cout << "Enter a positive number: ";
    cin >> n;
    cout << endl;    
    if (n < 0){
        cout << "Number is not positive." << endl;
    }
    else if (n == 0){
       cout << "0 = 0" << endl;
    }
    else if (n % 2 == 0){
        for (int i = 1; i <= n; i++){
            total += i;
            for (int j = 1; j <= i; j++){
                if (j == i){
                    cout << j;
                }
                else{
                    cout << j << "+";
                }
            }
            cout << "=" << total << endl;
        }
    }
    else{
        for (int i = (n+1)/2; i >= 1; i--)
    {
        for (int space = 0; space < n-i; space++){
            cout << " ";
        }

        for (int j = 1; j <= i * 2 - 1; j++){
            if (j == (i*2)/2){
                cout << "-";
            }
            else{
                cout << "o";
            }
        }

        cout << endl;
    }
    }

    return 0;
}
