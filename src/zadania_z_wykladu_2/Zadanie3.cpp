#include <iostream>
#include <string>
#include <vector>

float dot_product(std::vector <float> a, std::vector <float> b)
{
    int c=a.size();
    float d=0;
    for(int i=0;i<c;i++)
    {
        d=d+(a[i]*b[i]);
    }
    return d;
}
int main()
{
    float e;
    std::vector <float> a;
    std::vector <float> b;

    do
    {
    std::cout<<"podaj liczby do wektora a, 0 zakonczy podawanie"<<std::endl;
    std::cin>>e;
    a.push_back(e);
    }
    while(e!=0);
    a.pop_back();
    std::cout<<std::endl;
    do
    {
    std::cout<<"podaj liczbe do wektora b, 0 zakonczy podawanie"<<std::endl;
    std::cin>>e;
    b.push_back(e);
    }
    while(e!=0);
    b.pop_back();

    int f1=a.size();
    int f2=b.size();
    if(f1==f2)
    {
       if(f1>0)
       {
            e=dot_product(a,b);
            std::cout<<"iloczyn skalarny podanych wektorow to: "<<e<<std::endl;
       }
       else
        std::cout<<"nie podano wektorow"<<std::endl;
    }
    else
    {
        std::cout<<"podano bledne dane"<<std::endl;
    }
system("pause");
return 0;
}
