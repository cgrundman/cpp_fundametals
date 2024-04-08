// Challenge - 
// Substitution Cipher

/*
A simple and very old method of sending secret messages is the substitution cipher.
You might have used this cipher with your friends when you were a kid.
Basically, each letter of the alphabet gets replaced by another letter of the alphabet.
For example, every 'a' get replaced with an 'X', and every 'b' gets replaced with a 'Z', etc.

Write a program thats ask a user to enter a secret message.

Encrypt this message using the substitution cipher and display the encrypted message.
Then decryped the encrypted message back to the original message.

You may use the 2 strings below for  your subsitition.
For example, to encrypt you can replace the character at position n in alphabet 
with the character at position n in key.

To decrypt you can replace the character at position n in key
with the character at position n in alphabet.

Have fun! And make the cipher stronger if you wish!
Currently the cipher only substitutes letters - you could easily add digits, puncuation, whitespace and so
forth. Also, currently the cipher always substitues a lowercase letter with an uppercase letter and vice-versa.
This could also be improved.

Remember, the less code you write the less code you have to test!
Reuse existing functionality in libraries and in the std::string class!
*/

#include <iostream>

using namespace std;

int main() {
    
    string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key      {"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};
    
    // Input string
    cout << "Input a string to be encoded: ";
    string input;
    cin >> input;
    cout << endl;
    
    // Encode
    string input_enc = input;
    int index = 0;
    for (char& character : input) {
        
        // Iteration through alphabet
        int alphabet_idx = 0;
        for (char& letter : alphabet) {
            // Check for match with current letter, break to extract index
            if (character==letter) {
                break;
            }
            
            alphabet_idx++;
        }
        
        // Add encoded letter to encoded string
        input_enc[index] = key[alphabet_idx];
        
        index++;
    }
    cout << "Encoded string:" << input_enc << endl;
    return 0;
}
