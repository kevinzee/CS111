#include <iostream>
#include <cstdlib>
using namespace std;

int biggerDigit(int x, int y){
        if(x <= 0 || y <= 0) return 0;
        int ev = biggerDigit(x / 10, y/ 10);
        return max(x % 10, y % 10) + 10 * ev;
}

int countValue(int a[], int cap, int e){
        int counter = 0;
        for (int i = 0; i <= cap; i++)
                if(a[i] == e)
                        counter++;
        return counter;
}

void doubleValue(int x){
        x = 2*x
}

string concat (string a, string b, string c){
        return a +  b + c;
}
int main(){
   srand(time(0));
   int a = 2, b = 232, c = 133, d[4] = {1,2,3,3}, e[3] = {2,2,2};
   cout << biggerDigit(b, c) << endl;
   //print out new value 233, the function constructs a new number 233 from b-232 and c-133, first digit 2>1 so 2, second digit 3=3 so 3, last digit 2>3 so 3.
   cout << biggerDigit(a, 1) << endl; //print out new value 2, because a-2 is greater than 1
   c = biggerDigit(c, 432);   //c becomes 433, c-133 compare with 432, first digit 1<4 so 4, second digit 3=3 so 3, last digit 3>2 so 3.
   cout << countValue(d, 4, d[2]) << endl; //print out 2, the function counts how many d[2]-3 is in array d, there're 2 3's.
   a = countValue(e, 3, a);    //a becomes 3, the function counts how many a-2 in e, there're 3 2's
   doubleValue(b); // - d is doubled from 232 to 464
   doubleValue(a); // - a gets from 3 to 6.
   cout << a << b << endl; //print out 6464 - current value of a and b
   cout << concat("text1","123","!") << endl; // print out text1123! - concat gives the concatenation of all of its parameters
   return 0;
}

