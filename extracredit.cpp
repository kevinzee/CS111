#include <iostream>
using namespace std;

int main(){
        int num = 9, guess, tries = 5;
        cout << "You have 5 attempts to enter a number between 1 & 20: ";
        cin >> guess;

        while((guess < num) && tries > 1) {
                tries = tries - 1;
                cout << "You guessed too low! Try again: ";
                cin >> guess;
        }
        while((guess > num) && tries > 1) {
                tries = tries - 1;
                cout << "You guessed too high! Try again: ";
                cin >> guess;
        }
        if (guess != num){
                cout << "You got all 5 attempts incorrect!" << endl;
        }else {
                cout << "Nicely done! You guessed the number!" << endl;
}
return 0;
}

