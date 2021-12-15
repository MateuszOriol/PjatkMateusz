#include <iostream>
#include <string>

void co_ktorys_znak(std::string a, int b)
{
	std::string w = a;
	int r = b, dl = a.size();
	for (int i = b; i <= dl; i += b)
	{
		std::cout << w[i - 1] << " ";
	}
}

int main()
{
	std::string a;

	std::cout << "podaj stringa" << std::endl;
	std::cin >> a;

	int b;

	std::cout << "podaj liczbe" << std::endl;
	std::cin >> b;

	co_ktorys_znak(a, b);
	system("pause");
	return 0;
}
