#include <iostream>

auto main(int argc, char* argv[]) -> int
{
    int i;
    i=99;
	while(i>=1) {
		std::cout << i << " bottles of beer on the wall," << i-- << " bottles of beer. Take one down, pass it around," << i << " bottles of beer on the wall..." << std::endl;
	if (i==0)
	    std::cout << "No more bottles of beer on the wall, no more bottles of beer. Go to the store and buy some more, 99 bottles of beer on the wall..."<< std::endl;
	}
	
	return 0;
}
