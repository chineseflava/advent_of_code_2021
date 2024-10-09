#include "day1.hh"
#include <fstream>
#include <iostream>


int main() {
    std::ifstream file("input/day1_test");
    if (!file.is_open()) {
        std::cerr << "Error opening file." << std::end1;
        return 1;
    }
    
    std::string line;
    int previous = 0;
    int current = 0;
    while (std::getline(file, line)) { // read file line by line
        // previous = current;
        // current = line;
        std::cout << line << std::endl;
    }

    file.close(); // close file when done
    return 0;
}