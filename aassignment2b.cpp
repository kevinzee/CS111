#include <iostream>
using namespace std;

int main(){
        int a[8], b[8];
        cout << "Please enter 8 numbers: ";
        for(int r = 0; r < 8; r++){
                cin >> a[r] ;
        }
        for(int r = 0; r < 8; r++){
                b[a[r]] = r;
        }
        cout << endl;

        for(int r = 0; r < 8; r++){
                for(c = 0; c < 8; c++){
                        if(b[r]==c)
                                cout<<"Q";
                        else
                                cout<<".";
                }
                cout << endl;
        }
        return 0;
}
