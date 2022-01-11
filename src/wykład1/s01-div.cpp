#include <iostream>
#include <string>

auto main(int argc, char* argv[]) -> int
{
    if (argc > 2) {
        auto const a = std::stof(argv[1]);
        auto const b = std::stof(argv[2]);
        if (b != 0) {
            std::cout << (a / b) << '\n';
        } else {
            std::cout << "Nie dzielimy przez 0! \n";
        }
    } else {
        std::cout << "Podaj odpowiednie wartosci \n";
    }
    return 0;
}
