// Challenge 2
// Automated Grader
#include <iostream>
#include <fstream>

using namespace std;

int main() {
    std::ifstream in_file;
    in_file.open("C:\\Users\\chris\\Documents\\GitHub\\cpp_workspaces\\16-io_and_streams\\Challenge2\\responses.txt");
    if (!in_file) {
        std::cerr << "Problem opening file" << std::endl;
        return 1;
    }
    char c {};
    while (in_file.get(c)) {
        std::cout << c;
    }
    std::cout << std::endl;
    in_file.close();
    return 0;
}