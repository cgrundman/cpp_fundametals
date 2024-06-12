#ifndef _MYSTRING_H_
#define _MYSTRING_H_

class Mystring
{
    friend Mystring operator-(const Mystring &obj);                         // Make Lowercase Operation
    friend Mystring operator+(const Mystring &lhs, const Mystring &rhs);    // Concatenation Operation
    friend bool operator==(const Mystring &lhs, const Mystring &rhs);       // Equality assignment
    friend bool operator!=(const Mystring &lhs, const Mystring &rhs);       // Non-equality assignment
    friend bool operator<(const Mystring &lhs, const Mystring &rhs);        // Less-Than Length Comparison
    friend bool operator>(const Mystring &lhs, const Mystring &rhs);        // Greater-Than Length Comparison
    friend Mystring &operator+=(Mystring &lhs, const Mystring &rhs);        // Concatinate and Assign Operation
    friend Mystring operator*(Mystring &lhs, int n);                        // Repeater Operation
    friend Mystring &operator*=(Mystring &lhs, int n);                      // Repeater and Assign Operation
    friend Mystring &operator++(Mystring &obj);                             // Make Uppercase Operation - Pre-increment
    friend Mystring operator++(Mystring &obj, int);                         // Make Uppercase Operation - Post-increment
    friend std::ostream &operator<<(std::ostream &os, const Mystring &rhs); // Overloaded Insertion Operator
    friend std::istream &operator>>(std::istream &in, Mystring &rhs);       // Overloaded Extraction Operator
    
private:
    char *str;  // pointer to a char[] that holds a C-style string
public:
    Mystring();                                 // No-args constructor
    Mystring(const char *s);                    // Overloaded constructor
    Mystring(const Mystring &source);           // Copy constructor
    Mystring( Mystring &&source);               // Move constructor
    ~Mystring();                                // Destructor
    
    Mystring &operator=(const Mystring &rhs);   // Copy Assignment
    Mystring &operator=(Mystring &&rhs);        // Move Assignment
    
    Mystring &operator-(Mystring &&rhs);        // Lowercase Assignment
    
    void display() const;
    
    int get_length() const;                     // getters
    const char *get_str() const;
};

#endif // _MYSTRING_H_