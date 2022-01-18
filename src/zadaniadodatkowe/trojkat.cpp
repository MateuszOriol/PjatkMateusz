#include <iostream>
#include <string>

using namespace std;

class Trojkat
{
public:
	int x, y, z;
};

string sprawdz(Trojkat test)
{
	int a, b, c, temp;
	a = test.x;
	b = test.y;
	c = test.z;
	for (int i = 0; i < 2; i++)
	{
		if (b > a)
		{
			temp = a;
			a = b;
			b = temp;
		}

		if (c > b)
		{
			temp = c;
			c = b;
			b = temp;
		}
	}

	if (b*b + c * c == a * a)
		return "trojkat prostokatny";

	else if (b*b + c * c<a*a)
		return "trojkat rozwartokatny";
	else
		return "trojkat ostrokatny";
}
int main()
{
	Trojkat trojkat;

	do
	{
		cout << "podaj dlugosc 1 boku trojkata" << endl;
		cin >> trojkat.x;
		cout << "podaj dlugosc 2 boku trojkata" << endl;
		cin >> trojkat.y;
		cout << "podaj dlugosc 3 boku trojkata" << endl;
		cin >> trojkat.z;
		cout << endl;

		if ((trojkat.y + trojkat.z > trojkat.x) && (trojkat.y < trojkat.z + trojkat.x) && (trojkat.y + trojkat.x > trojkat.z))
		{
			cout << sprawdz(trojkat);
			cout << endl;
		}
		else
		{
			cout << "to nie jest trojkat, prosze podac boki jeszcze raz" << endl << endl;
		}
	}
	while ((trojkat.y + trojkat.z < trojkat.x) || (trojkat.y > trojkat.z + trojkat.x) || (trojkat.y + trojkat.x < trojkat.z));

	system("pause");
	return 0;
}
