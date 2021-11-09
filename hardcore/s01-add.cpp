#include <iostream>
#include <string>
// for std :: cout , std :: cerr , and std :: cin
auto main(int argc, char* argv[]) -> int
{
    if (argc > 2) {
        auto const a = std::stoi(argv[1]);
        auto const b = std::stoi(argv[2]);
        std::cout << (a + b) << "\n";
    } else {
        std::cout << "Podaj odpowiednie wartosci \n";
    }
    return 0;
}
