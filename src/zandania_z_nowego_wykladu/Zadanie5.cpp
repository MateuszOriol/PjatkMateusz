#include <iostream>

void is_even(int a)
{
	if (a % 2 == 0)
		std::cout << "jest parzysta";
	else
		std::cout << "jest nieparzysta";
}
int main()
{
	int a;
	std::cout << "podaj liczbe" << std::endl;
	std::cin >> a;
	is_even(a);
	return 0;
}
