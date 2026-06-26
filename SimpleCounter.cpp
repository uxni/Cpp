#include <iostream>

int main() {
    int value;
    std::cout << "counter\n";
    std::cout << "add a number: \n";
    
    std::cin >> value;
    
    for (int i = 0; i <= value; i++) {
      std::cout << i << std::endl;
    }
    
    return 0;
}
