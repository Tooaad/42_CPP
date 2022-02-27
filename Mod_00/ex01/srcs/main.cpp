#include "PhoneBook.hpp"

int main(void)
{
	PhoneBook   PhoneBook;
	std::string	action;

	while (PhoneBook.getIndex() < 8)
	{	
		std::cout << "Type the command you would like to run? ";
		std::getline(std::cin, action);

		if (action.compare("add") == 0)
		{
			PhoneBook.setIndex(PhoneBook.getIndex() + 1);
			PhoneBook.add();
		}
		else if (action.compare("search") == 0)
		{
			PhoneBook.printBook();
			PhoneBook.search();
		}
		else if (action.compare("exit") == 0)
			break ;

		if (PhoneBook.getIndex() == 8)
		{
			PhoneBook.setIndex(0);
			PhoneBook.isFull();
		}
	}
	return 0;
}