#include "stdafx.h"
#include <iostream>
#include <cmath>

int main()
{
	int liczba = 0;
	int liczba_sqrt = 0;
	int licznik = 0;
	int czy_pierwsza = 0;
	std::cout << "Podaj liczbe:" << std::endl;
	std::cin >> liczba;
	liczba_sqrt = sqrt(liczba);
	for (int i = 2; i <= liczba_sqrt; ++i)
	{
		if (liczba%i == 0)
		{
			czy_pierwsza++;
		}
		licznik++;
	}
	if(czy_pierwsza ==0)
	{
		std::cout << "Podana liczba jest pierwsza" << "\n";
	}
	else
	{
		std::cout << "Podana liczba nie jest pierwsza" << "\n";
	}
	std::cout << "Liczba iteracji petli for " << licznik << "\n";
	system("pause");
    return 0;
}

