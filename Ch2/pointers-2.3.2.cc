#include <iostream>

int main()
{
	int var1 = 42;
	int *point = &var1;
	point += 2;
	std::cout << point << " is now 2 more than 42" << std::endl;
	int var2 = 45;
	point = &var2;
	std::cout << point << " has changed targets and is now 45" << std::endl;
}

