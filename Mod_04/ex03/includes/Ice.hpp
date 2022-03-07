#ifndef ICE_H
# define ICE_H

#include "../includes/AMateria.hpp"
#include "../includes/ICharacter.hpp"

class Ice : public AMateria {

public:

	Ice();
	Ice(std::string type_);
	Ice(Ice const & Ice_);
	~Ice();
	Ice&		operator=(Ice const & Ice_);
	
	AMateria* clone(void) const;
	void use(ICharacter& target);
};

#endif