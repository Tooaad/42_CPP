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

	std::string str(argv[1]);
	// std::cout << str << std::endl;
	Type type(str);
	type.getType();


	// std::cout << type << std::endl();
	

	return 0;
}