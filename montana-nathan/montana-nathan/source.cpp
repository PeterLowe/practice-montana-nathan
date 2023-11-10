// Nathan Mas



#include <iostream>
int main()
{
	int number = 8;// user number
	std::cout << "What is the number :";
	std::cin >> number;
	if (number % 2 == 1)
	{
		std::cout << "number is odd" << std::endl;
	}
	return 1;
}