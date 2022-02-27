#include "Contact.hpp"

Contact::Contact(void)
{
}

Contact::~Contact(void)
{
}

Contact Contact::create(void)
{
	Contact Cont;

	std::cout << "Introduzca nombre:";
	std::getline(std::cin, Cont.firstName);
	std::cout << "Introduzca apellido:";
	std::getline(std::cin, Cont.lastName);
	std::cout << "Introduzca apodo:";
	std::getline(std::cin, Cont.nickname);
	std::cout << "Introduzca numero de telefono:";
	std::getline(std::cin, Cont.number);
	std::cout << "Introduzca su secreto mas oscuro:";
	std::getline(std::cin, Cont.darkestSecret);

	return Cont;
}

void	Contact::printContact(int i)
{
    std::cout << std::right << std::setw(10) << "Index";
    std::cout << "|";
    std::cout << std::right << std::setw(10) << "First Name";
    std::cout << "|";
    std::cout << std::right << std::setw(10) << "Last Name";
    std::cout << "|";
    std::cout << std::right << std::setw(10) << "Nick Name";
    std::cout << "|";
    std::cout << std::right << std::setw(10) << "Cell Phone";
    std::cout << "|";
    std::cout << std::right << std::setw(10) << "Secret";
    std::cout << std::endl;

	std::cout << std::right << std::setw(10) << i;
    std::cout << "|";
    std::cout << std::right << std::setw(10) << this->firstName;
    std::cout << "|";
    std::cout << std::right << std::setw(10) << this->firstName;
    std::cout << "|";
    std::cout << std::right << std::setw(10) << this->nickname;
    std::cout << "|";
    std::cout << std::right << std::setw(10) << this->number;
    std::cout << "|";
    std::cout << std::right << std::setw(10) <<this->darkestSecret;
    std::cout << std::endl << std::endl;

}

std::string Contact::getFirstName(void)
{
    return this->firstName;
}

std::string Contact::getLastName(void)
{
    return this->lastName;
}

std::string Contact::getNickname(void)
{
    return this->nickname;
}

std::string Contact::getNumber(void)
{
    return this->number;
}

std::string Contact::getDarkestSecret(void)
{
    return this->darkestSecret;
}



