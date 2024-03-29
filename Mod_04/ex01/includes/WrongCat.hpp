#ifndef WRONGCAT_H
# define WRONGCAT_H

#include <iostream>
#include <string>
#include <sstream>
#include "../includes/WrongAnimal.hpp"

class WrongCat : public WrongAnimal {

public:

	WrongCat();
	WrongCat(WrongCat const & wcat_);
	~WrongCat();
	
	void		makeSound(void) const;
};


#endif