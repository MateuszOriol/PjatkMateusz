#include <iostream>
#include <string>
#include <vector>

struct Student
{
    std::string imie,nazwisko;
    std::vector <float> oceny;
};

float average_of( std::vector <float> oceny )
{
    int wielkosc=oceny.size();
    float x=0;
    if(wielkosc==0)
    {
        std::cout<<"Brak wektora"<<std::endl;
    }
    else
    {
        for(int i=0;i<wielkosc;i++)
        {
            x=x+oceny[i];
        }
    x=x/wielkosc;
    }
    return x;
}
Student najlepsza_srednia(std::vector <Student> studenci)
{
    int n=studenci.size();
    float T[n]={0};

    if(n>1)
    {
        std::vector <float> temp;
        for(int i=0;i<n;i++)
        {
            temp=studenci[i].oceny;
            T[i]=average_of(temp);
        }

        int m=0;
        int w;
        for(int y=0;y<n;y++)
        {
            if(T[y]>m)
            {
                w=y;
                m=T[y];
            }
        }

        return
            studenci[w];
    }

    else
        return studenci[0];

}
void wyswietl_studenta(Student studenciak)
{
    std::cout<<"Imie: "<<studenciak.imie<<std::endl;
    std::cout<<"Nazwisko: "<<studenciak.nazwisko<<std::endl;
    std::cout<<"Srednia: "<<average_of(studenciak.oceny)<<std::endl;
}
int main()
{
     std::vector <Student> studenci;

    Student mateusz;
    mateusz.imie="Mateusz";
    mateusz.nazwisko="Oriol";
    mateusz.oceny={5,3,4,5};
    studenci.push_back(mateusz);

    Student oskar;
    oskar.imie="Oskar";
    oskar.nazwisko="Wielki";
    oskar.oceny={2,2,3,4};
    studenci.push_back(oskar);

    Student arek;
    arek.imie="Arek";
    arek.nazwisko="Maly";
    arek.oceny={4,2,2,2,5};
    studenci.push_back(arek);

    Student wynik;
    wynik=najlepsza_srednia(studenci);
    wyswietl_studenta(wynik);
    return 0;
}
