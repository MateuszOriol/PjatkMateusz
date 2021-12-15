#include <iostream>
#include <string>
int main()
{
	std::string a;
	int dlugosc, mezczyzni = 0, kobiety = 0;
	std::cout << "podaj 5 imion" << std::endl;
	for (int i = 0; i<5; i++)
	{
		dlugosc = 0;
		std::cin >> a;
		dlugosc = a.size();
		if (a[dlugosc - 1] == 'a')
			kobiety++;
		else mezczyzni++;
	}
	std::cout << "meskich jest: " << mezczyzni << std::endl;
	std::cout << "damskich jest: " << kobiety << std::endl;
	return 213;
}
