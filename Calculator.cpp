#include <iostream>

float add(float a,float b) {
	int sum;
	sum = a + b;
	return sum;
}

float substract(float a, float b) {
	float sub;
	sub = a - b;
	return sub;
}

float multiply(float a, float b) {
	float multiple;
	multiple = a * b;
	return multiple;
}

float divide(float a, float b) {
	float by;
	by = a / b;
	return by;
}

int main() {
	char internal = 'y';
	int choice;
	float a, b;
	float r_add, r_sub, r_multiple, r_divide;
	while (internal == 'y') {
		std::cout << "Enter first number: ";
		std::cin >> a;
		std::cout << "\n1 for add, 2 for substract, 3 for multiply, 4 for divide.";
		std::cin >> choice;
		std::cout << "Enter second number: ";
		std::cin >> b;
		switch (choice) {
		case 1:
			r_add = add(a, b);
			std::cout << "Your answer is: " << r_add;
			std::cout << "\nCalculate further...(y/n)";
			std::cin >> internal;
			if (internal == 'y') {
				continue;
			}
			else {
				break;
			}
		case 2:
			r_sub = substract(a, b);
			std::cout << "your answer is: " << r_sub;
			std::cout << "\nCalculate further...(y/n)";
			std::cin >> internal;
			if (internal == 'y') {
				continue;
			}
			else {
				break;
			}
		case 3:
			r_multiple = multiply(a, b);
			std::cout << "your answer is: " << r_multiple;
			std::cout << "\nCalculate further...(y/n)";
			std::cin >> internal;
			if (internal == 'y') {
				continue;
			}
			else {
				break;
			}
		case 4:
			r_divide = divide(a, b);
			std::cout << "your answer is: " << r_divide;
			std::cout << "\nCalculate further...(y/n)";
			std::cin >> internal;
			if (internal == 'y') {
				continue;
			}
			else {
				break;
			}
		default:
			std::cout << "Invalid input.";
			break;
		}
	}
	return 0;
}
