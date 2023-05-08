#include <iostream>
using namespace std;

        int main (){
        string first_name, last_name;
        int age, birth_year;
        
        cout << "Please enter your first name:" << endl;
        cin >> first_name;
        cout << "Hello " << first_name << ", now enter your last name!" << 
endl;
        cin >> last_name;
        cout << "Hello " << last_name << ", " << first_name << "! " << 
"Enter your year of birth: "<< endl;
       	cin >> birth_year;
	age = 2022 - birth_year;
	cout << "Hello " << last_name << ", " << first_name << "! " <<
 "Age: "<< age << endl;
	 return 0;
}

