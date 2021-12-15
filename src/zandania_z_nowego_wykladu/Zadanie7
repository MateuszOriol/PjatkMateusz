#include <iostream>
#include <string>

int count_chars(std::string a, char b)
{
	int n = a.size(), licznik = 0;
	for (int i = 0; i<n; i++)
	{
		if (a[i] == b)
			licznik++;
	}
	return licznik;
}
int main()
{
	std::string a;

	std::cout << "podaj stringa" << std::endl;
	std::cin >> a;

	char b;

	std::cout << "podaj char" << std::endl;
	std::cin >> b;


	std::cout << "ilosc wystapien" << std::endl;
	std::cout << count_chars(a, b) << std::endl;
	system("pause");
	return 0;
}
