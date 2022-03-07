#include "../includes/MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		this->source[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const & materiasource_)
{
	*this = materiasource_;
	for (int i = 0; i < 4; i++)
		this->source[i] = source[i];
}

MateriaSource::~MateriaSource()
{
	for(int i = 0; i < 4; i++)
		if (this->source[i])
			delete this->source[i];
}

MateriaSource& MateriaSource::operator=(MateriaSource const & MateriaSource_)
{
	// ????
	return *this;
}

void MateriaSource::learnMateria(AMateria* m)
{
		for (int i = 0; i < 4; i++)
	{
		if (this->source[i] == NULL)
		{
			this->source[i] = m->clone();
			return ;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (!this->source[i])
			return NULL;
		if (this->source[i]->getType() == type)
			return this->source[i]->clone();
	}
	return NULL;
}
