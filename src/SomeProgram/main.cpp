#include "SharedLibrary.h"

#include <iostream>

int main()
{
	SharedLibrary s;
	s.someFunction();
	s.someFunction();
	s.someFunction();
	std::cout << s.getValue() << std::endl;
}
