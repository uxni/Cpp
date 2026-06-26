#include <iostream>

// basically returns the sum of two number
int Add(int a, int b) {
  return a + b;
}

int Subtract(int a, int b) {
  return a - b;
}

int Multiply(int a, int b) {
  return a * b;
}

int Divided(int a, int b) {
  return a / b;
}


int main() {
    char again = 'y';
    
    while (again == 'y') {
	    std::cout << "Calculator\n";
	    std::cout << "1. Add\n";
	    std::cout << "2. Subtract\n";
	    std::cout << "3. Multiply\n";
	    std::cout << "4. Divide\n";
	    std::cout << "Choice: ";
	    
	    int a; int b; int result;
	    int choice;
	    
	    std::cin >> choice;
	    
	    std::cout << "first number: ";
	    std::cin >> a;
	    std::cout << "second number: ";
	    std::cin >> b;
	    
	    switch(choice) {
	    case 1:
	      result = Add(a,b);
	      break;
	    case 2:
	      result = Subtract(a,b);
	      break;
	    case 3:
	      result = Multiply(a,b);
	      break;
	    case 4:
	      result = Divided(a,b);
	      break;
	    default: 
	      std::cout << "invalid" << std::endl;
	      break;
	    }
	    
	    std::cout << result << std::endl;
	    
	    std::cout << "do it again? (y/n)" << std::endl;
	    std::cin >> again;
    }
    return 0;
}
