// Using final
#include <iostream>

using namespace std;

class Base {
public:
    virtual void say_hello() const {
        std::cout << "Hello - I'm a Base class object" << std::endl;
    }
};

class Derived: public Base {
public:
    virtual void say_hello()  const override final {       
        std::cout << "Hello - I'm a Derived class object" << std::endl;
    }
};

//class Another: public Derived {
//public:
//    virtual void say_hello()  const override  {       // Error cannot override final method
//        std::cout << "Hello - I'm a Another class object" << std::endl;
//    }
//};

void greetings(const Base &obj) {
    std::cout << "Greetings: " ;
    obj.say_hello();
}

using namespace std;

int main() {
    Base b;
    b.say_hello();                      // Base::say_hello()
    
    Derived d;                          // Derived::say_hello()
    d.say_hello();
    
    Base *p1 = new Base();      // Base::say_hello()
    p1->say_hello();
    
    Derived *p2 = new Derived();    // Derived::say_hello()
    p2->say_hello();
    
    Base *p3 = new Derived();   //  Base::say_hello()   ?????   IMPORTANT !!!
    p3->say_hello();
    
    std::cout <<  "\n========================" << std::endl;
    greetings(b);
    greetings(d);
    greetings(*p1);
    greetings(*p2);
    greetings(*p3);
    return 0;
}