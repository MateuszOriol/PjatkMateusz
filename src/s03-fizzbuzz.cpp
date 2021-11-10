#include <iostream>

int main(int argc, char* argv[])
{
    int n = std::atoi(argv[1]);

    while (n >= 1) {
        std::cout << n << std::endl;
        if (n % 3 == 0 && n % 5 == 0)
            std::cout << "FizzBuzz" << std::endl;
        else if (n % 3 == 0)
            std::cout << "Fizz" << std::endl;
        else if (n % 5 == 0)
            std::cout << "Buzz" << std::endl;

        n--;
    }

    return 0;
}
