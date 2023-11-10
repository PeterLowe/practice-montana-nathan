// Montana Nicholas

#include <iostream>

int main()

{
	int number = 8; //number from user 

	std::cout << "enter the number :";
	std::cin >> number;

	if (number % 2 == 0)
	{
		std::cout << "number is even" << std::endl;
	}
	return 1;

}