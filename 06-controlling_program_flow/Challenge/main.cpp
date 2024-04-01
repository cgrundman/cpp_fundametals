// Challenge
/*    
    This challenge is about using a collection (list) of integers and allowing the user
    to select options from a menu to perform operations on the list.
    
    Your program should display a menu options to the user as follows:
    
    P - Print numbers
    A - Add a number
    M - Display mean of the numbers
    S - Display the smallest number
    L - Display the largest number
    Q - Quit

    Enter your choice:
    
The program should only accept valid choices from the user, both upper and lowercase selections should be allowed.
If an illegal choice is made, you should display, "Unknown selection, please try again" and the menu options should be
displayed again.


If the user enters 'P' or 'p', you should display all of the elements (ints) in the list.
If the list is empty you should display "[] - the list is empty"
If the list is not empty then all the list element should be displayed inside square brackets separated by a space. 
For example, [ 1 2 3 4 5 ]
      
If the user enters 'A' or 'a' then you should prompt the user for an integer to add to the list 
which you will add to the list and then display it was added. For example, if the user enters 5
You should display, "5 added".
Duplicate list entries are OK

If the user enters 'M' or 'm'  you should calculate the mean or average of the elements in the list and display it.
If the list is empty you should display, "Unable to calculate the mean - no data"

If the user enters 'S' or 's' you should display the smallest element in the list.
For example, if the list contains [2 4 5 1],  you should display, "The smallest number is 1"
If the list is empty you should display, "Unable to determine the smallest number - list is empty"

If the user enters 'L' or 'l' you should display the largest element in the list
For example, if the list contains [2 4 5 1], you should display, "The largest number is 5"
If the list is empty you should display, "Unable to determine the largest number - list is empty"

If the user enters 'Q' or 'q' then you should display 'Goodbye" and the program should terminate.

Before you begin. Write out the steps you need to take and decide in what order they should be done.
Think about what loops you should use as well as what you will use for your selection logic.

This exercise can be challenging! It may likely take a few attempts before you complete it -- that's OK!

Finally, be sure to test your program as you go and at the end.

Hint: Use a vector!

Additional functionality if you wish to extend this program.

- search for a number in the list and if found display the number of times it occurs in the list
- clearing out the list (make it empty again) (Hint: the vector class has a .clear() method)
- don't allow duplicate entries
- come up with your own ideas!

Good luck!

*/
#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> numbers;
    char command = 'P';

    // Program Loop
    do {
        // Display menu
        cout << endl;
        cout << "  P - Print numbers" << endl;
        cout << "  A - Add a number" << endl;
        cout << "  M - Display mean of the numbers" << endl;
        cout << "  S - Display the smallest number" << endl;
        cout << "  L - Display the largest number" << endl;
        cout << "  Q - Quit" << endl;
        cout << endl;
        
        // Accept command
        cout << "Enter your choice: ";
        cin >> command;

        // Perform functions
        // Print all numbers
        if (command=='P' || command=='p') { // Print numbers 
            if (numbers.size()==0) {
                cout << "[] - the list is empty" << endl;
            } else {
                cout << "[ ";
                for (long long unsigned int i=0; i<numbers.size(); i++) {
                    cout << numbers.at(i) << " ";
                }
                cout << "]" << endl;
            }
            
        // Add a number
        } else if (command=='A' || command=='a') {
            int added_number;
            cout << "Enter an integer: ";
            cin >> added_number;
            numbers.push_back(added_number);
            cout << endl << added_number << " added" << endl;
        } 
        
        // Display mean of the numbers
        else if (command=='M' || command=='m') {
            if (numbers.size()==0) {
                cout << "Unable to calculate the mean - no data" << endl;
            } else {
                double mean = 0.0;
                for (long long unsigned int i=0; i<numbers.size(); i++) {
                    mean += numbers[i];
                }
                mean = mean/numbers.size();
                cout << "The mean of all numbers: " << mean << endl;
            }
        }
        
        // Display the smallest number
        else if (command=='S' || command=='s') {
            // Check for vector to have values
            if (numbers.size()==0) {
                cout << "Unable to determine the largest number - list is empty" << endl;
            } else {
                int smallest_num;
                for (long long unsigned int i=0; i<numbers.size(); i++) {
                    if (i==0) {
                        smallest_num = numbers[i];
                    } else if (smallest_num>numbers[i]) {
                        smallest_num = numbers[i];
                    }
                }
                cout << smallest_num << endl;
            }
        }
        
        // Display the largest number
        else if (command=='L' || command=='l') {
            // Check for vector to have values
            if (numbers.size()==0) {
                cout << "Unable to determine the smallest number - list is empty" << endl;
            } else {
                int largest_num;
                for (long long unsigned int i=0; i<numbers.size(); i++) {
                    if (i==0) {
                        largest_num = numbers[i];
                    } else if (largest_num<numbers[i]) {
                        largest_num = numbers[i];
                    }
                }
                cout << largest_num << endl;
            }
        }
        
        // Quit Program
        else if (command=='Q' || command=='q') {
            cout << "Goodbye" << endl;
        }
            
        // Return error if unknown command
        else {
            cout << "Unknown selection, please try again" << endl;
        }
        
    } while (command!='q' && command!='Q');
    
    
    return 0;
}

