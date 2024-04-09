#include <iostream>
#include <string>

using namespace std;

int main () {
    
    cout << "Input a string: " << endl;
    string input;
    cin >> input;
    
    // Iterate through lenght of input string
    for (long long unsigned int i=0; i<input.length(); i++) {
        
        // Initialize current pyramid line as blank
        string pyramid_line = "";
        for (long long unsigned int j=0; j<input.length()*2-1; j++) {
            pyramid_line = pyramid_line + " ";
        }
            
        // Reverse iterate for current letter for forward insertion
        int forward_idx = input.length()-1;
        for (long long unsigned int k=i; k<input.length()*2-1; k--) {
            // Set characters in pyramid
            pyramid_line[forward_idx] = input[k];
            forward_idx++;
        }
        
        // Reverse insertion
        int reverse_idx = input.length()-1;
        for (long long unsigned int k=i; k<input.length()*2-1; k--) {
            // Set characters in pyramid
            pyramid_line[reverse_idx] = input[k];
            reverse_idx--;
        }
            
        // Display current pyramid line
        cout << pyramid_line << endl;
    }

    return 0;
}
