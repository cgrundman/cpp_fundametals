#include <iostream>
#include <cstring>
#include "Mystring.h"

 // No-args constructor
Mystring::Mystring() 
    : str{nullptr} {
    str = new char[1];
    *str = '\0';
}

// Overloaded constructor
Mystring::Mystring(const char *s) 
    : str {nullptr} {
        if (s==nullptr) {
            str = new char[1];
            *str = '\0';
        } else {
            str = new char[strlen(s)+1];
            strcpy(str, s);
        }
}

// Copy constructor
Mystring::Mystring(const Mystring &source) 
    : str{nullptr} {
        str = new char[strlen(source.str)+ 1];
        strcpy(str, source.str);
 //       std::cout << "Copy constructor used" << std::endl;

}

// Move constructor
Mystring::Mystring( Mystring &&source) 
    :str(source.str) {
        source.str = nullptr;
//        std::cout << "Move constructor used" << std::endl;
}

 // Destructor
Mystring::~Mystring() {
    delete [] str;
}

 // Copy assignment
Mystring &Mystring::operator=(const Mystring &rhs) {
//    std::cout << "Using copy assignment" << std::endl;

    if (this == &rhs) 
        return *this;
    delete [] str;
    str = new char[strlen(rhs.str) + 1];
    strcpy(str, rhs.str);
    return *this;
}

// Move assignment
Mystring &Mystring::operator=( Mystring &&rhs) {
 //   std::cout << "Using move assignment" << std::endl;
    if (this == &rhs) 
        return *this;
    delete [] str;
    str = rhs.str;
    rhs.str = nullptr;
    return *this;
}

// Equality assignment
bool operator==(const Mystring &lhs, const Mystring &rhs) {
    return (std::strcmp(lhs.str, rhs.str) == 0);
}

// Non-equality assignment
bool operator!=(const Mystring &lhs, const Mystring &rhs) {
    return (std::strcmp(lhs.str, rhs.str) != 0);
}

// Less-Than Length Comparison
bool operator<(const Mystring &lhs, const Mystring &rhs) {
    return (std::strlen(lhs.str) < std::strlen(rhs.str));
}

// Greater-Than Length Comparison
bool operator>(const Mystring &lhs, const Mystring &rhs) {
    return (std::strlen(lhs.str) > std::strlen(rhs.str));
}

// Make Lowercase Operation
Mystring operator-(const Mystring &obj) {
    char *buff = new char[std::strlen(obj.str) + 1];
    std::strcpy(buff, obj.str);
    for (size_t i=0; i<std::strlen(buff); i++) 
        buff[i] = std::tolower(buff[i]);
    Mystring temp {buff};
    delete [] buff;
    return temp;
}

// Concatenation Operation
Mystring operator+(const Mystring &lhs, const Mystring &rhs) {
    char *buff = new char[std::strlen(lhs.str) + std::strlen(rhs.str) + 1];
    std::strcpy(buff, lhs.str);
    std::strcat(buff, rhs.str);
    Mystring temp {buff};
    delete [] buff;
    return temp;
}

// Concatenation and Assign Operation
Mystring &operator+=(Mystring &lhs, const Mystring &rhs) {
    lhs = lhs + rhs;
    return lhs;
}

// Repeater Operation
Mystring operator*(Mystring &lhs, int n) {
    Mystring temp;
    for (int i = 1; i<=n; i++)
        temp = temp + lhs;
    return temp;
}

// Repeater and Assign Operation
Mystring &operator*=(Mystring &lhs, int n) {
    lhs = lhs * n;
    return lhs;
}

// Make Uppercase Operation - Pre-increment
Mystring &operator++(Mystring &obj) {
    for (size_t i=0; i< std::strlen(obj.str); i++)
        obj.str[i] = std::toupper(obj.str[i]);
    return obj;
}

// Make Uppercase Operation - Post-increment
Mystring operator++(Mystring &obj, int) {
    Mystring temp {obj};
    ++obj;
    return obj;
}

// Display method
void Mystring::display() const {
    std::cout << str << " : " << get_length() << std::endl;
}

 // getters
 int Mystring::get_length() const { return strlen(str); }
 const char *Mystring::get_str() const { return str; }

// Overloaded Insertion Operator
std::ostream &operator<<(std::ostream &os, const Mystring &rhs) {
    os << rhs.str;
    return os;
}

// Overloaded Extraction Operator
std::istream &operator>>(std::istream &in, Mystring &rhs) {
    char *buff = new char[1000];
    in >> buff;
    rhs = Mystring{buff};
    delete [] buff;
    return in;
}