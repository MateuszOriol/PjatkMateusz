#include <iostream>
#include <vector>

float average_of()
{
	std::vector <int> liczba;

	float srednia;
	float licznik = 0;
	float suma = 0;

	std::cout << "wpisz liczby, a 0 zakonczy" << std::endl;
	
	do
	{
		std::cin >> licznik;
		suma += licznik;
		liczba.push_back(licznik);
	} while (licznik != 0);
	srednia = suma / (liczba.size() - 1);
	return srednia;
}


int main()
{
	std::cout << average_of();
	std::cout << std::endl;
	system("pause");
    return 0;
}
