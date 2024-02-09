#include <iostream> 

int main() {
	int numberOne, numberTwo; 
	char op; 

	std::cout << "Enter first number: ";
	std::cin >> numberOne; 

	std::cout << "Enter second number: ";
	std::cin >> numberTwo; 

	std::cout << "Enter the operator: ";
	std::cin >> op;

	if (op == '+' || op == '-' || op == '*' || op == '/') {
		if (op == '+') {
			std::cout << numberOne << " + " << numberTwo << " = " << numberOne + numberTwo << std::endl; 
		} else if (op == '-') {
			std::cout << numberOne << " - " << numberTwo << " = " << numberOne - numberTwo << std::endl;
		} else if (op == '*') { 
			std::cout << numberOne << " * " << numberTwo << " = " << numberOne * numberTwo << std::endl;
		} else { 
			if (numberTwo != 0) {
				std::cout << numberOne << " / " << numberTwo << " = " << numberOne / numberTwo << std::endl;
			} else { 
				std::cout << "Divison by zero is not allowed. " << std::endl;
			}
		}
	} else { 
		std::cout << "Invalid operator. " << std::endl;
	}

	return 0;
}