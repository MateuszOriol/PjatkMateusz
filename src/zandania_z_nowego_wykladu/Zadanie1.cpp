#include <iostream>
#include <sstream>
#include <string>

using namespace std;

bool l_pierwsza(int a)
{
    int licznik=0;
    for(int i=2;i<a;i++)
    {
    if(a%i==0)
    licznik++;
    }
    if(licznik==0)
        return true;
    else
        return false;
}

int main()
{
    int w;
    string pierwsze,liczba;
    for(int i=2;i<21;i++)
    {
    w=l_pierwsza(i);
    if(w==1)
    {
    stringstream uno;
    uno << i;
    string strus = uno.str();
    pierwsze = pierwsze + strus + " ";
    }
    }
    cout<<pierwsze<<endl;
    cout<<pierwsze<<endl;
	system("pause");
return 0;
}
