#include <iostream>
#include <string>
#include <vector>

std::vector <std::string> split (std::string a)
{
    int dlugosc=a.size();
    std::string slowo;
    std::vector <std::string> slowa;
    for(int i=0;i<dlugosc;i++)
    {
        if(a[i]==' ')
        {
            slowa.push_back(slowo);
            slowo.clear();
        }
        else
            slowo=slowo+a[i];
    }
    if(!slowo.empty())
        slowa.push_back(slowo);
    return slowa;
}

int main()
{
    std::string a;
    std::cout<<"Podaj zdanie do podzielenia"<<std::endl;
    std::getline (std::cin, a);

    std::vector <std::string> zdanie;
    zdanie=split(a);
    int n=zdanie.size();

    std::cout<<std::endl;
    for(int i=0;i<n;i++)
    {
        std::cout<<zdanie[i]<<std::endl;
    }
  system("pause");
return 0;
}
