// Overloading operators as member methods
#include <iostream>
#include "Mystring.h"

using namespace std;

int main() {
    cout << boolalpha << endl;
    
    Mystring larry{"Larry"}; 
    Mystring moe{"Moe"};
    
    Mystring stooge = larry;
    larry.display();                                              // Larry
    moe.display();                                                // Moe
    
    cout << (larry == moe) << endl;                               // false
    cout << (larry == stooge) << endl;                            // true

    larry.display();                                              // Larry
    Mystring larry2 = -larry;
    larry2.display();                                             // larry
     
    Mystring stooges = larry + "Moe";                             // ok with member function
    //Mystring stooges = "Larry" + moe;                           // Compiler error
    
    Mystring two_stooges = moe + " " + "Larry";                   // Moe Larry
    two_stooges.display();      
                                                   
    Mystring three_stooges = moe + " " + larry + " " +  "Curly";  //  Moe Larry Curly
    three_stooges.display();                                                        
    
    return 0;
}