#include <iostream>
using namespace std;

int main(){
    int choice;
    double length,width,area,base,height;
    cout << "Please select the area of the shape to calculate" << endl;
    cout << "1. Square" << endl;
    cout << "2. Rectangle" << endl;
    cout << "3. Triangle" << endl;
    cout << "4. Quit Program"<< endl;
    cout << "Enter selection" << endl;
while(true){
       cin >> choice;
    if (choice == 1 ){
        cout << "enter the length" << endl;
        cin >> length;
        cout << "enter the width" << endl; 
        cin >> width;
        area = length * width;
        cout << "the area of the square is: " << area << endl;       
    }
    else if (choice == 2){
        cout << "enter the length" <<endl;
        cin >> length;
        cout << "enter the width" << endl;
        cin >> width;
        area = length * width;
        cout << "the area of the rectangle is:" << area << endl;
    }
    else if (choice == 3){
        cout << "enter the height"<< endl;
        cin >> height ;
        cout << "enter the base" << endl;
        cin >> base;
        area = height * base;
        cout << "the area of a triangle is:" << area << endl;
    }
    else if (choice == 4){
        cout << "exiting  program" << endl;
        exit(0);
    }
    else{
        cout << "Your input was:" << choice << " which is an invalid input"<< endl;
        cout<< "please enter a valid input!!!" << endl; 
    }
}
}