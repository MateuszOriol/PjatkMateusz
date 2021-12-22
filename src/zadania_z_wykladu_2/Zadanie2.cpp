#include <iostream>
#include <string>
#include <vector>
#include <cctype>

std::string filter_palindromes()
{
	std::string slowo;
	std::vector <std::string> slowa, palindromy;
	std::cout << "wpisz slowa, a 'abc' zakonczy" << std::endl;

	do
	{
		std::cin >> slowo;
		slowa.push_back(slowo);
	} while (slowo != "abc");
	std::string a;
	int licznik1 = slowa.size();
	int licznik2 = 0;
	int licznik3 = 0;
	int dlugosc;
	do
	{
		a = slowa[licznik3];
		dlugosc = a.size();
		licznik2 = 0;
		for (int i = 0; i < dlugosc / 2; i++)
		{
			if (a[i] == a[dlugosc - i - 1])
				licznik2++;
		}
		if (licznik2 == dlugosc / 2)
		{
			palindromy.push_back(a);
		}

		licznik3++;
	} while (a != "abc");
	
	std::string palindromy2;
	for (int i = 0; i<palindromy.size(); i++)
	{
		palindromy2 += slowa[i];
		palindromy2 += " ";
	}
	std::cout << std::endl;

	return palindromy2;
}

int main()
{
	std::cout << filter_palindromes();
	system("pause");
	return 0;
}
