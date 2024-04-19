#include <iostream>
using namespace std;

int main() {
    int number;
    int attempts = 0;
    cout << "Enter an integer value between 5 and 10" << endl;
    while(true){
        attempts++;
        cin >> number; //get user input
        if(number >= 5 && number <= 10){
             cout << "Your input value(" <<number<<") has been accepted";
              break;
        }else { 
            if (attempts == 1) {
                cout << "Sorry, you have entered an invalid number,please try again"<< endl;
            } else {
                cout << "You entered " << number << ". please enter a number between 5 and 10." << endl;
            } 
        }
    }
        return 0;
}
