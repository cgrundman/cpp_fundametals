// Protected members and class access
#include <iostream>

using namespace std;

class Base {
    // Note friends of Base have access to all 
public:
    int a {0};
    void display() { std::cout << a << ", " << b << ", " << c << endl; } // member method has access to all
protected:
    int b {0};
private:
    int c {0};
};

class Derived: public Base {
    // Note friends of Derived have access to only what Derived has access to

    // a will be public
    // b will be protected
    // c will not be accessible
public:
    void access_base_members() {
        a = 100;    // OK
        b = 200;    // OK
     //   c = 300;    // not accessible
    }
    
};

int main() {
    
    cout << "=== Base member access from base objects ===========" << endl;
    Base base;
    base.a = 100;   // OK
//    base.b = 200;   // Compiler Error
//    base.c = 300;   // Compiler Error
    
    cout << "=== Base member access from derived objects ===========" << endl;
    Derived d;
    d.a = 100;  // OK
//    d.b = 200;  // Compiler Error
//    d.c = 300;  // Compiler Error
    return 0;
}