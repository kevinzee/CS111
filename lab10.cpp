#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
        int rnum; 
	srand(time(0));
        for(int c = 1; c <= 10; c++){
                rnum = rand() % 90 + 10; 
		cout << "\nRandom Number: "<< rnum << endl;
	{
            	cout << "The Square root of " << rnum << " is " <<  sqrt(rnum) << endl;
        }

        {
            	cout << rnum << " squared is " << rnum * rnum <<endl;
        	}
	}
        cout << endl;
        return 0;
}
