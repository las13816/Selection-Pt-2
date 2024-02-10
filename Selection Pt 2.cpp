//Insert library 
#include <iostream> 

// Create main function 
int main() {
	int numberOne, numberTwo; 
	char op; 

	// Get user input for first number, second number, and the operator 
	std::cout << "Enter first number: ";
	std::cin >> numberOne; 

	std::cout << "Enter second number: ";
	std::cin >> numberTwo; 

	std::cout << "Enter the operator: ";
	std::cin >> op;

	// Create an if statement to cycle through operators to pick the proper operator for calculations 
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
		// Create an else statement to inform the user in the case of an invalid operator 
		std::cout << "Invalid operator. " << std::endl;
	}

	return 0;
}