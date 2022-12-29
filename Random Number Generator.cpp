#include <stdlib.h>
#include <iostream>

class RandomNumberGenerator {
private:
	int _random, _minor, _major;

public:
	void SetMinor(int neg) {
		_minor = neg;  //gonna fetch us the minimum number
	}
	void SetMajor(int pos) {
		_major = pos;  //gonna fetch us the maximum number
	}
	int RandomNoFunction() {
		_random = ((rand() % _major) + _minor);
		return _random;
	}
};

int main(void) {

	int min, max, rep;
	std::cout << "Input the minimun number: ";
	std::cin >> min;  //user provides minimum random generation number

	std::cout << "Input the maximum number: ";
	std::cin >> max;  //user provides maximum random generation number

	std::cout << "How many repeats? ";
	std::cin >> rep;  //repeats printing a random number
	std::cout << "\n";

	RandomNumberGenerator Randomno;
	Randomno.SetMinor(min);
	Randomno.SetMajor(max);

	for (int i = 0; i < rep; i++) {
		std::cout << "\n" << Randomno.RandomNoFunction() << std::endl;
	}
	system("PAUSE");
}
