#ifndef CHARACTER_H
# define CHARACTER_H

#include "../includes/AMateria.hpp"
#include "../includes/ICharacter.hpp"

class Character : public ICharacter {

private:

	std::string name;
	AMateria* equips[4];

public:

	Character();
	Character(std::string const & name_);
	Character(Character const & character_);
	~Character();
	Character&			operator=(Character const & Character_);
	
	std::string const &	getName() const;
	void				equip(AMateria *materia);
	void				unequip (int idx);
	void				use(int idx, ICharacter& target);
	
	
};

#endif