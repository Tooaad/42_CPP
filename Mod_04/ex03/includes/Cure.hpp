#ifndef CURE_H
# define CURE_H

#include "../includes/AMateria.hpp"
#include "../includes/ICharacter.hpp"

class Cure : public AMateria {

public:

	Cure();
	Cure(std::string type_);
	Cure(Cure const & cure_);
	~Cure();
	Cure&		operator=(Cure const & cure_);
	
	AMateria* clone(void) const;
	void use(ICharacter& target);
};

#endif