#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

#include "Contact.hpp"

class PhoneBook {

private:

    Contact Contacts[8];
    int     index;
    int     full;

public:
    
    PhoneBook();
	~PhoneBook();

	void    add(void);
	void	search(void);
    
    void    printBook(void);
    
    int     getIndex(void);
    void    setIndex(int index);
    void    isFull(void);
};

#endif