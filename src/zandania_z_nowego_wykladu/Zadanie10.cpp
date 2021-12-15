#include <iostream>
#include <string>

void box_print(std::string a, std::string b, std::string c, std::string d, std::string e)
{
	int najwieksza = 0;
	int T[5];
	T[0] = a.length();
	T[1] = b.length();
	T[2] = c.length();
	T[3] = d.length();
	T[4] = e.length();
	for (int i = 0; i <= 4; i++)
	{
		if (najwieksza < T[i])
		{
			najwieksza = T[i];
		}
	}
	najwieksza = najwieksza + 4;
	int j = 0;
	do
	{
		j++;
		std::cout << "*";
	} while (j < najwieksza);
	std::cout << std::endl;

	std::cout << "* " << a;
	for (int i = 0; i <= (najwieksza - a.length()-4); i++)
	{
		std::cout << " ";
	}
	std::cout << "*" << std::endl;

	std::cout << "* " << b;
	for (int i = 0; i <= (najwieksza - b.length()-4); i++)
	{
		std::cout << " ";
	}
	std::cout << "*" << std::endl;

	std::cout << "* " << c;
	for (int i = 0; i <= (najwieksza - c.length()-4); i++)
	{
		std::cout << " ";
	}
	std::cout << "*" << std::endl;

	std::cout << "* " << d;
	for (int i = 0; i <= (najwieksza - d.length()-4); i++)
	{
		std::cout << " ";
	}
	std::cout << "*" << std::endl;

	std::cout << "* " << e;
	for (int i = 0; i <= (najwieksza - e.length()-4); i++)
	{
		std::cout << " ";
	}
	std::cout << "*" << std::endl;

	j = 0;
	do
	{
		j++;
		std::cout << "*";
	} while (j < najwieksza);
	std::cout << std::endl;
}

int main()
{
	std::string a, b, c, d, e;
	std::cin >> a;
	std::cout << std::endl;
	std::cin >> b;
	std::cout << std::endl;
	std::cin >> c;
	std::cout << std::endl;
	std::cin >> d;
	std::cout << std::endl;
	std::cin >> e;
	std::cout << std::endl;
	box_print(a, b, c, d, e);
	system("pause");

    return 0;
}
