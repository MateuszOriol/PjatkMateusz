#include <iostream>
#include <string>
#include <vector>

struct Student
{
    std::string imie,nazwisko;
    std::vector <float> oceny;
};

struct Group
{
    std::string nazwa;
    std::vector <Student> studenciaki;
};

void addtoGroup(Group grupa, Student studenciak)
{
    grupa.studenciaki.push_back(studenciak);
}

int main()
{
    Group grupka;
    grupka.nazwa="18c";

    Student mateusz;
    mateusz.imie="Mateusz";
    mateusz.nazwisko="Oriol";
    mateusz.oceny={5,3,4,2};

    addtoGroup(grupka, mateusz);

    return 0;
}
