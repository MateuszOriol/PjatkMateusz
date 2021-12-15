#include <iostream>
#include <string>

bool is_palindrome(std::string a)
{
	std::string w = a;
	int dl = a.size(), licznik = 0;
	for (int i = 0; i<dl / 2; i++)
	{
		if (w[i] == w[dl - i - 1])
			licznik++;
	}
	if (licznik == dl / 2)
		return true;
	else
		return false;
}

int main()
{
	std::string a;

	std::cout << "podaj stringa" << std::endl;
	std::cin >> a;

	int x;
	x = is_palindrome(a);

	if (x == 1)
	{
		std::cout << "podane slowo jest palindromem" << std::endl;
	}
	else
	{
		std::cout << "podane slowo nie jest palindromem" << std::endl;
	}
	return 0;
}
