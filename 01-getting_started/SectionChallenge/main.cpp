#include <iostream>

using namespace std;

int main () {
    
    int favorite_number;
    
    // Ask user for input of favorite number
    cout << "Enter your favorite number between 1 and 100:" << endl;
    
    // Accept input for favorite number
    cin >> favorite_number;
    
    // Output response
    cout << "Amazing! That's my favorite number too!" << endl;
    cout << "No really!! ";
    cout << favorite_number;
    cout << " is my favorite number!" << endl;
    
    return 0;
}
