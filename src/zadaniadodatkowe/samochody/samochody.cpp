#include <iostream>
#include <string>
#include "samochody.h"

Samochod::Samochod(std::string a, std::string b, int x, int y)
{
    nazwa = a;
    model = b;
    rokprodukcji = x;
    przebieg = y;
}

Samochod::~Samochod()
{
    std::cout << "samochod usuniety" << "\n";
}

int Samochod::ustal_cenawyjsciowa()
{
    std::cout << "podaj cene samochodu" << "\n";
    std::cin >> cenawyjsciowa;
    if(cenawyjsciowa - (2021 - rokprodukcji) * 10000 - (przebieg * 3) < 0)
    {
        std::cin >> cenawyjsciowa;
    else
    {
    while(cenawyjsciowa - ((2021 - rokprodukcji) * 10000) - (przebieg * 3) < 0)
    {
        std::cout << "cena jest zamala, prosze podac wieksza cene" << "\n";
        std::cin >> cenawyjsciowa;
    }
    }
    }
    return cenawyjsciowa;
}

int Samochod::ustal_cenakoncowa()
{
    cenakoncowa = cenawyjsciowa - ((2021 - rokprodukcji) * 10000) - (przebieg * 3);
    return cenakoncowa;
}
void Samochod::samochody()
{
    std::cout << "marka samochodu: " << nazwa << "\n";
    std::cout << "model samochodu: " << model << "\n";
    std::cout << "rok produkcji: " << rokprodukcji <<"\n";
    std::cout << "cena wyjsciowa: " << cenawyjsciowa <<"\n";
    std::cout << "cena koncowa: " << cenakoncowa <<"\n";
}



