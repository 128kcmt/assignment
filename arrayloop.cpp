#include <iostream>
#include <string>
using namespace std;

int main () {
    string my_array[8]={"B123","C234", "A345","C15","B177","G3003","C235","B179"};
    string letter;

    for( int i = 0 ; i <= 8 ; i++)
    {
        letter = my_array[i] ;
        if (letter.front() == 'B' ){
        cout << my_array[i] << endl ;
        }
    }
    return 0;
}