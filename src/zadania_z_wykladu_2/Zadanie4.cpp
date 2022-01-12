#include <iostream>
#include <string>
#include <vector>

struct Student
{
    std::string imie,nazwisko;
    std::vector <float> oceny;
};

float average_of( std::vector <float> a )
{
    int d=a.size();
    float s=0;
    if(d==0)
    {
        std::cout<<"Brak vektora"<<std::endl;
    }
    else
    {
        for(int i=0;i<d;i++)
        {
            s=s+a[i];
        }
    s=s/d;
    }
    return s;
}

int main()
{
    Student a;
    float ocena;
    std::cout<<"Podaj imie studenta"<<std::endl;
    std::cin>>a.imie;

    std::cout<<"Podaj nazwisko studenta"<<std::endl;
    std::cin>>a.nazwisko;

    do
    {
        std::cout<<"Podaj oceny studenta, zakonczy podanie wartosci ktora nie moze byc ocena"<<std::endl;
        std::cin>>ocena;
        a.oceny.push_back(ocena);
    }
    while( ocena>=2 && ocena<=5 );
    a.oceny.pop_back();
    ocena=average_of(a.oceny);
    std::cout<<"Srednia ocen studenta to: "<<ocena<<std::endl;
    system("pause");
    return 0;
}
