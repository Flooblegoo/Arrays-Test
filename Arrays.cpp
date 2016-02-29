// Trying to learn Arrays and accessing them

#include <iostream>
#include <ctime>
#include <string>

int main() {
	int randNumber1;
	std::string firstName;

	srand(time(0));
	randNumber1 = rand();
	int fNameNumb = (randNumber1 % 6) + 1;

	std::string fNames[6] = { "Jake", "Will", "Kyle", "Alex", "Dylan", "Mert" };

	firstName = fNames[fNameNumb];
	std::cout << "The Number Selected for the Array was " << fNameNumb << " and the name is " << firstName << ".\n\n";

	system("pause");

	return 0;
}