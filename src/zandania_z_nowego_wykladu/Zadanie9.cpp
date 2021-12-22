#include <iostream>
#include <string>

bool is_palindrome(std::string a)
{
	std::string slowo = a;
	int dlugosc = a.size(), licznik = 0;
	for (int i = 0; i<dlugosc / 2; i++)
	{
		if (slowo[i] == slowo[dlugosc - i - 1])
			licznik++;
	}
	if (licznik == dlugosc / 2)
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
