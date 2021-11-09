#include <iostream>
#include <string>

auto main( int argc,char* argv[] ) -> int
{   
    auto const haslo = std::string{argv[1]};
    auto podanehaslo = std::string{};
    do
    {
        std::cout << "Haslo: ";
        std::getline(std::cin, podanehaslo);
    }
    while (podanehaslo != haslo);
        std::cout << "ok!" <<std::endl;

    return 0;
}
