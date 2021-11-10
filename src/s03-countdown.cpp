#include <iostream>

int main(int argc, char* argv[])

{
    int n;
    n = std::atoi(argv[1]);
    while (n >= 0) {
        std::cout << n-- << '\n';
    }
}
