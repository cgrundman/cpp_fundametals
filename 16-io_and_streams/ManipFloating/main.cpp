// Stream manipulators - Floating point manipulators
// scientific, setprecision, fixed, showpoint, showpos, uppercase
#include <iostream>
#include <iomanip>

int main() {
    double num1 {123456789.987654321};
    double num2 {1234.5678};                     
    double num3 {1234.0};                          
 
    //using default settings
    std::cout << "--Defaults ----------------------------" << std::endl;
    std::cout << num1 << std::endl;	
    std::cout << num2<< std::endl;	
    std::cout << num3<< std::endl;	
    
    //Note how since we can't display in precision 2 scientific notation is used
    std::cout << std::setprecision(2);
    std::cout << "--Precision 2----------------------------" << std::endl;
    std::cout << num1 << std::endl;	
    std::cout << num2<< std::endl;	
    std::cout << num3<< std::endl;	
    
    // Using precision 5
    std::cout << std::setprecision(5);
    std::cout << "--Precision 5----------------------------" << std::endl;
    std::cout << num1 << std::endl;	
    std::cout << num2<< std::endl;	
    std::cout << num3<< std::endl;	

    // Using precision 9
    std::cout << std::setprecision(9);
    std::cout << "--Precision 9----------------------------" << std::endl;
    std::cout << num1 << std::endl;	
    std::cout << num2<< std::endl;	
    std::cout << num3<< std::endl;	

    // Using precision 3 and fixed
    std::cout << std::setprecision(3) << std::fixed;
    std::cout << "--Precision 3 - fixed ----------------------------" << std::endl;
    std::cout << num1 << std::endl;	
    std::cout << num2<< std::endl;	
    std::cout << num3<< std::endl;	
    
    // Using precision  3, fixed and scientific notation
    // Note precision is after the decimal
    std::cout << std::setprecision(3)<< std::scientific;
    std::cout << "--Precision 3 - scientific  ----------------------------" << std::endl;
    std::cout << num1 << std::endl;	
    std::cout << num2<< std::endl;	
    std::cout << num3<< std::endl;	
    
    // Same but display capital 'E' in scientific 
    std::cout << std::setprecision(3) << std::scientific << std::uppercase;
    std::cout << "--Precision 3 - scientific - uppercase  ----------------------------" << std::endl;
    std::cout << num1 << std::endl;	
    std::cout << num2<< std::endl;	
    std::cout << num3<< std::endl;	
    
    // Show '+' symbol for positive numbers
    std::cout << std::setprecision(3) << std::fixed << std::showpos;
    std::cout << "--Precision 3 - fixed - showpos ----------------------------" << std::endl;
    std::cout << num1 << std::endl;	
    std::cout << num2<< std::endl;	
    std::cout << num3<< std::endl;	
    
    
    // Back to defaults
    std::cout.unsetf(std::ios::scientific | std::ios::fixed);
    std::cout << std::resetiosflags(std::ios::showpos);
    
    // Show trailing zeroes up to precision 10
    
    std::cout << std::setprecision(10) << std::showpoint;
    std::cout << "-- precision 10 - showpoint ----------------------------" << std::endl;
    std::cout << num1 << std::endl;	
    std::cout << num2<< std::endl;	
    std::cout << num3<< std::endl;	

// Back to defaults
    std::cout.unsetf(std::ios::scientific | std::ios::fixed);
    std::cout << std::setprecision(6);
    std::cout << std::resetiosflags(std::ios::showpos);
    std::cout << std::resetiosflags(std::ios::showpoint);

    std::cout << "--Back to defaults----------------------------" << std::endl;
    std::cout << num1 << std::endl;	
    std::cout << num2<< std::endl;	
    std::cout << num3<< std::endl;	
    
    return 0;
}