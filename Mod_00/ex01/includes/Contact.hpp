#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>

class Contact {


private:

	std::string	firstName;
	std::string	lastName;
	std::string	nickname;
	std::string	number;
	std::string	darkestSecret;

public:

    Contact(void);
    ~Contact(void);

	Contact create(void);
	void	printContact(int i);

    std::string getFirstName(void);
	std::string getLastName(void);
	std::string getNickname(void);
	std::string getNumber(void);
	std::string getDarkestSecret(void);
};

#endif