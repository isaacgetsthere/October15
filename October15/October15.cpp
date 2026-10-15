
#include <iostream>
#include<string>
int main()
{
	int totalInches;
	std::cout << "Enter your height in inches: " << std::endl;
	std::cin >> totalInches;
	const int inchesPerFoot = 12;

	std::cout << totalInches << " inches is equal to " << totalInches / inchesPerFoot << " feet." << std::endl;
	std::cout << "and " << totalInches % inchesPerFoot << " inches." << std::endl;
}
