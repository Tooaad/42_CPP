#include <iostream>
#include <string>
#include <sstream>
#include "../includes/Type.hpp"

int main(int argc, char *argv[])
{

	if (argc != 2)
	{
		std::cout << "Argument error" << std::endl;
		return 0;
	}

	Type type(argv[1]);
	type.getType();

	return 0;
}