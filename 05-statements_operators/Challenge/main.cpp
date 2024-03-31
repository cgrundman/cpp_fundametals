// Challenge
/*
	For this program I will be using US dollars and cents.
	
    Write a program that asks the user to enter the following:
	An integer representing the number of cents 
    	
	You may assume that the number of cents entered is greater than or equal to zero
    
	The program should then display how to provide that change to the user.
	
	In the US:
		1 dollar is 100 cents
		1 quarter is 25 cents
		1 dime is 10 cents
		1 nickel is 5 cents, and
		1 penny is 1 cent.
		
	Here is a sample run:
	
	Enter an amount in cents :  92
	
	You can provide this change as follows:
	dollars    : 0
	quarters : 3
	dimes     : 1
	nickels   : 1
	pennies  : 2
	
	Feel free to use your own currency system.
	Also, think of how you might solve the problem using the modulo operator.

	Have fun and test your program!!

*/
#include <iostream>

using namespace std;

int main() {

    // Accept the change
    cout << "Enter an amount in cents : ";
    int change;
    cin >> change;

    // Calculate the change to be returned
    int pennies = 0;
    int nickels = 0;
    int dimes = 0;
    int quarters = 0;
    int dollars = 0;
    if (change>=100) { // Calculate dollars
        dollars = change/100;
        cout << dollars << endl;
        change = change - (dollars*100);
    }
    if (change>=25) { // Calculate quarters
        quarters = change/25;
        change = change - (quarters*25);
    }
    if (change>=10) { // Calculate dimes
        dimes = change/10;
        change = change - (dimes*10);
    }
    if (change>=5) { // Calculate nickels
        nickels = change/5;
        change = change - (nickels*5);
    }
    if (change>0) { // Calculate pennies
        pennies = change;
    }
    
    // Display the change to be returned
    cout << "You can provide this change as follows:" << endl;
    cout << "dollars: " << dollars << endl;
    cout << "quarters: " << quarters << endl;
    cout << "dimes: " << dimes << endl;
    cout << "nickels: " << nickels << endl;
    cout << "pennies: " << pennies << endl;
    
    return 0;
}
