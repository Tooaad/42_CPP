#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	this->index = -1;
	this->full = 0;
}

PhoneBook::~PhoneBook(void)
{
}

void    PhoneBook::add()
{
    Contact cont;

    this->Contacts[this->index] = cont.create();
    this->index++;
}

void	PhoneBook::search()
{
	std::stringstream	ss;
	std::string			input_i;
	int					i;

	std::cout << "Select index: ";
	std::getline(std::cin, input_i);
	ss << input_i;
	ss >> i;
	if ((i > -1 && i < 8) && (i <= this->index || i < this->full))
		this->Contacts[i].printContact(i);
	else
		std::cout << "That index does not correspond to any contact" << std::endl;
}

void PhoneBook::printBook()
{
	int nContacts;

	if (this->full == 8)
		nContacts = 8;
	else
		nContacts = this->index;
	
	std::cout << std::endl;
	std::cout << std::right << std::setw(10) << "Index";
    std::cout << "|";
    std::cout << std::right << std::setw(10) << "First Name";
    std::cout << "|";
    std::cout << std::right << std::setw(10) << "Last Name";
    std::cout << "|";
    std::cout << std::right << std::setw(10) << "Nick Name";
	std::cout << std::endl;
	
	for(int i = 0; i < nContacts; i++)
	{
		std::cout << std::right << std::setw(10) << i;
		std::cout << "|";
		std::cout << std::right << std::setw(10) << Contacts[i].getFirstName();
		std::cout << "|";
		std::cout << std::right<< std::setw(10) << Contacts[i].getLastName();
		std::cout << "|";
		std::cout << std::right << std::setw(10) << Contacts[i].getNickname();
		std::cout << "|";
		std::cout << std::endl;
	}
}

int PhoneBook::getIndex()
{
    return this->index;
}

void    PhoneBook::setIndex(int ind)
{
    this->index = ind;
}

void PhoneBook::isFull()
{
	this->full = 8;
}