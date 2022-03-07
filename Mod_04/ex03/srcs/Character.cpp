#include "../includes/Character.hpp"

Character::Character() : name("")
{
	for (int i = 0; i < 4; i++)
		this->equips[i] = NULL;
}

Character::Character(std::string const & name_) : name(name_)
{
	for (int i = 0; i < 4; i++)
		this->equips[i] = NULL;
}

Character::Character(Character const & character_)
{
	*this = character_;
	this->name = character_.name;
	for (int i = 0; i < 4; i++)
		this->equips[i] = equips[i];
}

Character::~Character()
{
	for(int i = 0; i < 4; i++)
		if (this->equips[i])
			delete this->equips[i];
}

Character& Character::operator=(Character const & character_)
{
	// ????
	return *this;
}

const std::string&	Character::getName(void) const
{
	return this->name;
}


void Character::equip(AMateria* materia)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->equips[i] == NULL)
		{
			this->equips[i] = materia;
			return ;
		}
	}
}

void Character::unequip(int idx)
{
	if (idx > 0 && idx < 5)
		this->equips[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx > 0 && idx < 5 && this->equips[idx] != NULL)
	{	
		std::cout << this->name;
		this->equips[idx]->use(target);
	}
}