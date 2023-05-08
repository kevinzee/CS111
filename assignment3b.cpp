#include <iostream>
using namespace std;

int main() {
        int n;
        cout << "Please enter a size: ";
        cin >> n;
        for (int r = 0; r < n; r++){
                for (int c = 1; c < n - r; c++)
                        cout<<" ";
                for (int c = 0; c < 2 * r + 1; c++)
                        cout << (char)('A' + r % 26);
                cout<<endl;
    }
    return 0;
}
