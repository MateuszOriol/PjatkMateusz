#include <iostream>

using namespace std;

int main()
{
	int T[9] = { 1,2,5,10,20,50,100,200,500 };
	int Tdwa[9] = {};
	int kwota;
	cout << "podaj kwote w zlotowkach" << endl;
	cin >> kwota;

	for (int i = 8; i >= 0; i--)
	{
		if (kwota / T[i]>0)
		{
			Tdwa[i] = kwota / T[i];
			kwota = kwota % T[i];
		}
	}

	cout << "twoje nominaly to:" << endl;
	if (Tdwa[8]>0)
		cout << "500 - " << Tdwa[8] << " szt" << endl;
	if (Tdwa[7]>0)
		cout << "200 - " << Tdwa[7] << " szt" << endl;
	if (Tdwa[6]>0)
		cout << "100 - " << Tdwa[6] << " szt" << endl;
	if (Tdwa[5]>0)
		cout << "50 - " << Tdwa[5] << " szt" << endl;
	if (Tdwa[4]>0)
		cout << "20 - " << Tdwa[4] << " szt" << endl;
	if (Tdwa[3]>0)
		cout << "10 - " << Tdwa[3] << " szt" << endl;
	if (Tdwa[2]>0)
		cout << "5 - " << Tdwa[2] << " szt" << endl;
	if (Tdwa[1]>0)
		cout << "2 - " << Tdwa[1] << " szt" << endl;
	if (Tdwa[0]>0)
		cout << "1 - " << Tdwa[0] << " szt" << endl;
	system("pause");
	return 0;
}
