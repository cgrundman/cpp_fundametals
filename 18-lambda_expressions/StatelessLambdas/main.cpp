// Stateless lambda expressions
// [] - empty capture lists
#include <iostream>
#include <string>
#include <vector>
#include <functional>   // for std::function
#include <algorithm>

class Person {
    friend std::ostream &operator<<(std::ostream &os, const Person &rhs);
private:
    std::string name;
    int age;
public:
    Person(std::string name, int age) : name{name}, age{age} {};
    Person(const Person &p): name{p.name}, age{p.age} { }
    ~Person() = default;
    std::string get_name() const { return name; }
    void set_name(std::string name) {this->name = name; };
    int get_age() const {return age; }
    void set_age(int age) {this->age = age; }
};

std::ostream &operator<<(std::ostream &os, const Person &rhs) {
    os << "[Person: " <<rhs.name << " : " <<rhs.age << "]";
    return os;
}

void test1() {
    std::cout << "\n---Test1 --------------------------" << std::endl;

    [] () {std::cout << "Hi" << std::endl; }();
    
    [] (int x) { std::cout << x << std::endl;}(100);
    
    [](int x, int y) { std::cout << x+y << std::endl; }(100,200);
}

// Using values and references as lambda parameters 
void test2() {
    std::cout << "\n---Test2 --------------------------" << std::endl;
    
    auto l1 =   [] () {std::cout << "Hi" << std::endl;};
    l1();
    
    int num1 {100};
    int num2 {100};

    auto l2 = [](int x, int y) { std::cout << x+y << std::endl; };
    l2(10,20);
    l2(num1, num2);
    
    auto l3 = [](int &x, int y) {
        std::cout << "x: " << x << " y: " << y << std::endl;
        x = 1000;
        y = 2000;
    };
    
    l3(num1, num2);
    std::cout << "num1: " << num1 << " num2: " << num2 << std::endl;
}

// Using value and reference objects as lambda parameters
void test3() {
    std::cout << "\n---Test3 --------------------------" << std::endl;
    Person stooge {"Larry", 18};
    std::cout << stooge << std::endl;
    
    auto l4 = [] (Person p) {
        std::cout << p << std::endl; 
    };
    l4(stooge);
    
    auto l5 = [] (const Person &p) {
        std::cout << p << std::endl; 
    };
    l5(stooge);
    
    auto l6 = [] (Person &p) {
        p.set_name("Frank");
        p.set_age(25);
        std::cout << p << std::endl; 
    };
    l6(stooge);
    
    std::cout << stooge << std::endl;
    
}

// used for test4
// using std::function as a parameter in C++14 and greater
// or 
// auto as parameter type in C++20
void filter_vector(const std::vector<int> &vec, std::function<bool(int)> func)   {
//void filter_vector (const std::vector<int>  &vec, auto func) {
    std::cout <<"[ ";
    for (int i: vec) {
        if (func(i)) 
            std::cout << i  << " ";
    }
    std::cout << "]" << std::endl;
}

// passing a lambda to a function
void test4() {
    std::cout << "\n---Test4 --------------------------" << std::endl;
    std::vector<int> nums {10,20,30,40,50,60,70,80,90,100};
    
    filter_vector(nums, [](int x) {return x>50;});
    
    filter_vector(nums, [](int x) {return x<=30;});
    
    filter_vector(nums, [](int x) {return x>= 30 && x <=60;});
}

// used for test5
auto make_lambda() {
	return [] () {std::cout << "This lambda was made using the make_lambda function!" << std::endl;};
}

// returning a lambda from a function
void test5() {
	std::cout << "\n---Test5 --------------------------" << std::endl;
	
	auto l5 = make_lambda();
	
	l5();
}

// using auto in the lambda parameter list
void test6() {
    std::cout << "\n---Test6 --------------------------" << std::endl;
    auto l6 = [](auto x, auto y) {
        std::cout << "x: " << x << " y: " << y << std::endl;
    };
    
    l6(10,20);
    l6(100.3, 200);
    l6(12.5, 15.54);
    
    l6 (Person("Larry", 18), Person("Curly", 22));
}

// Simple lambda examples with std::sort and std::for_each
void test7() {
      std::cout << "\n---Test7 --------------------------" << std::endl;

    std::vector<Person> stooges {
        {"Larry", 18},
        {"Moe", 30},
        {"Curly", 25}
    };
    std::sort(begin(stooges), end(stooges), [](const Person &p1, const Person &p2) {
        return p1.get_name() < p2.get_name();
    });
    
    std::for_each(begin(stooges), end(stooges), [](const Person &p) {
        std::cout << p << std::endl;
    });
    
    std::cout << std::endl;
    
     std::sort(begin(stooges), end(stooges), [](const Person &p1, const Person &p2) {
        return p1.get_age()< p2.get_age();
    });
    
    std::for_each(begin(stooges), end(stooges), [](const Person &p) {
        std::cout << p << std::endl;
    });
}

int main()
{
    test1();
    test2();
    test3();
    test4();
    test5();
    test6();
	test7();
    
    std::cout << std::endl;
	return 0;
}