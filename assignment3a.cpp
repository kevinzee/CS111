#include <iostream>
using namespace std;

int lengthCompare (string a, string b){
        if (a.length() == b.length()) return 0;
        else if (a.length() > b.length()) return 1;
        else return -1;
}

string maxLengthString (string a[][3], int row, int col){
        string counter = a[0][0];
        for(int r = 0; r < row; r++)
    {
        for(int c = 0; c < col; c++)
        {
            if(lengthCompare(a[r][c], counter) > 0)
            {
                counter = a[r][c];
            }
        }
    }
    return counter;
}

bool sameEnding (string a, string b){
        string aEnd = (a.substr(a.length() -1, 1)), bEnd = (b.substr(b.length() - 1, 1));
        if (aEnd == bEnd)
                return true;
        else if (aEnd != bEnd)
                return false;
}

int main(){
        string s = "hello", t = "hi", a[2][3] = {{"hihi", "hhi","i"},{"hi", "hello",""}};
        if (lengthCompare(s,t) > 0) cout << s << " is longer than " << t << endl;
        else if (lengthCompare(a[1][0],a[1][1]) > 0) cout << a[1][0] << " is longer than " << s << endl;
        cout << maxLengthString(a, 2, 3) << " is the longest among all data in this program" << endl;
        if (sameEnding(a[0][0], a[0][2])) cout << a[0][0] << " ends with " << a[0][2]<< endl;
        if (sameEnding(a[0][0], a[0][1])) cout << a[0][0] << " ends with " << a[0][1]<< endl;
return 0;
}

