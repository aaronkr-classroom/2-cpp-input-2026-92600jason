#include <iostream>

int main() {
    
    std::cout << "--- 정사각형 ---" << std::endl;
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            std::cout << "*";
        }
        std::cout << std::endl; 
    }

    std::cout << "\n\n"; 

    
    std::cout << "--- 직사각형 ---" << std::endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 8; ++j) {
            std::cout << "*";
        }
        std::cout << std::endl; 
    }

    std::cout << "\n\n";


    std::cout << "--- 삼각형 ---" << std::endl;
    for (int i = 1; i <= 5; ++i) {
        for (int j = 0; j < i; ++j) {
            std::cout << "*";
        }
        std::cout << std::endl; 
    }

    return 0;
}