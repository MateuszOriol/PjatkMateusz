#include <iostream>
#include <string>

class Samochod
{
    std::string marka;
    std::string model;
    int rokprodukcji;
    int przebieg;
    int cenawyjsciowa;
    int cenakoncowa;

    public:
    Samochod(std::string, std::string, int, int);
    ~Samochod();
    int ustal_cenawyjsciowa();
    int ustal_cenakoncowa();
    void samochody();
};
