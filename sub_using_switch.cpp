#include <iostream>
#include <random>

using namespace std;
 
 int main () {
    random_device rd;// ensure that each time code is run a new number is generated
    mt19937 mt(rd());
    uniform_int_distribution<int> dist(0,11);
    
    int daysUntilExpiration = dist(mt) ; //assign a random number to daysUntilExpiration between 0 and 11
    cout << daysUntilExpiration <<endl ;

    switch (daysUntilExpiration)
    {
        case 0: if (daysUntilExpiration == 0)
        {
        cout << "Your subscription has expired";
    }
    break;
        case 1: {
            cout <<"Your subscription expires within a day!"<< endl << "Renew now and save 20%!";
        }
        break;
     case 2: case 3: case 4: case 5:{
            cout << "Your subscription expires in "<< daysUntilExpiration << " days" << endl << " Renew now and save 10%!";
        }
        break;
        case 6: case 7: case 8: case 9: case 10: {
            cout << "Your subscription will expire soon.Renew now!";
        }
        break;
        default :
            cout << "You have an active subscription";
         break;

        return 0;
    }
 }

      
