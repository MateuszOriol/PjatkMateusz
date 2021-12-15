#include <iostream>
#include <string>

int main()
{
	std::string imie1, imie2;
	std::cout << "Podaj pierwsze imie" << std::endl;
	std::cin >> imie1;
	std::cout << std::endl;
	std::cout << "Podaj drugie imie" << std::endl;
	std::cin >> imie2;
	std::cout << std::endl;
	if (imie1.size() > imie2.size())
	{
		std::cout << "Pierwsz imie jest dluzsze od drugiego!" << std::endl;
	}
	else if (imie1.size() < imie2.size())
	{
		std::cout << "Drugie imie jest dluzsze od pierwszego..." << std::endl;
	}
	else 
	{
		std::cout << "Imiona maja taka sama dlugosc." << std::endl;
	}
	system("pause");

    return 0;
}
