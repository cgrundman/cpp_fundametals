// Challenge 3
// Word counter
#include <iostream>
#include <fstream>

bool find_substring(const std::string &word_to_find, const std::string &target) {
    std::size_t found = target.find(word_to_find);
    if (found == std::string::npos)
        return false;
    else
        return true;
}

int main() {
    std::ifstream in_file {};
    std::string word_to_find {};
    std::string word_read {};
    int word_count {0};
    int match_count {0};
    
    in_file.open("C:\\Users\\chris\\Documents\\GitHub\\cpp_workspaces\\16-io_and_streams\\Challenge3\\romeoandjuliet.txt");
     if (!in_file) {
        std::cerr << "Problem opening file" << std::endl;
        return 1;
    }
   
    std::cout << "Enter the substring to search for: ";
    std::cin >> word_to_find;
    while (in_file >> word_read) {
        ++word_count;
        if (find_substring(word_to_find, word_read)) {
           ++match_count;
           // std::cout << word_read << " ";
        }        
    }

    std::cout << word_count << " words were searched..." << std::endl;
    std::cout << "The substring " << word_to_find << " was found " << match_count << " times " << std::endl;
    
    in_file.close();
    std::cout << std::endl;
    return 0;
}