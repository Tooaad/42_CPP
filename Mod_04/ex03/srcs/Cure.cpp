#include "../includes/Cure.hpp"

Cure::Cure() : AMateria()
{
	this->type = "Cure";
}

Cure::Cure(std::string type_)
{
	this->type = type;
}

Cure::Cure(Cure const & Cure_)
{
	*this = Cure_;
}

Cure::~Cure()
{
	//Delete del clone? se hace en el main true?
}

Cure& Cure::operator=(Cure const & Cure_)
{
	this->type = Cure_.type;
	return *this;
}

AMateria* Cure::clone(void) const
{
	AMateria* m = new Cure(this->type);
	return m;
}

void	use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "\'s wounds *" << std::endl;
}