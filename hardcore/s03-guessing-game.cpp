#include <iostream>
#include <ctime>

int main()
{

    srand(time(NULL));
    int n = rand() % 100 + 1;   
    int shot;  

    std::cout << "guess: ";
    std::cin >> shot;
    while (shot != n) {
        if (shot < n)
            std::cout << "number too small\n";
        else if (shot > n)
            std::cout << "number too big\n";
        std::cout << "guess: ";
        std::cin >> shot;
    }
    std::cout << "just right!";

    return 0;
}
