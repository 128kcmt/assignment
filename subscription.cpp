#include <iostream>
#include <random>

using namespace std;
 
 int main () {
    random_device rd;// ensure that each time code is run a new number is generated
    mt19937 mt(rd());
    uniform_int_distribution<int> dist(0,11);
    
    int daysUntilExpiration = dist(mt) ; //assign a random number to daysUntilExpiration between 0 and 11
    cout << daysUntilExpiration <<endl ;
     
     if (daysUntilExpiration == 0)
     {
        cout << "Your subscription has expired";
     }
        
        else if (daysUntilExpiration == 1 )
        { 
            cout << "Your subscription expires within a day!"<< endl;
            cout << "Renew now and save 20%!";
        }
        else if ( daysUntilExpiration <= 5 )
         {
             cout << "Your subscription expires in "<< daysUntilExpiration << " days"<< endl ;
             cout << "Renew now and save 10%!";
        }
         
         else if (daysUntilExpiration <= 10)
         { 
            cout << "Your subscription will expire soon.Renew now!";
        
         }
         else {
         cout <<"You have an active subscription";
         }
    return 0 ;
 }