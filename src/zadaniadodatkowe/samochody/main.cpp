#include <iostream>
#include "auto.h"

main()
{
    Samochod Tiguan("Volskswagen","Tiguan",1992,10000);
    Tiguan.ustal_cenawyjsciowa();
    Tiguan.ustal_cenakoncowa();
    Tiguan.samochody();
    Samochod Ds3("Ds","3",1997,100000);
    Ds3.ustal_cenawyjsciowa();
    Ds3.ustal_cenakoncowa();
    Ds3.samochody();
    return 0;
}
