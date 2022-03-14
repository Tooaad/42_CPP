#include "../includes/Intern.hpp"
#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/ShrubberyCreationForm.hpp"

Intern::Intern()
{
}

Intern::Intern(Intern const & target_)
{
	forms[0] = target_.forms[0];
	forms[1] = target_.forms[1];
	forms[2] = target_.forms[2];
}

Intern&		Intern::operator=(Intern const & intern)
{
	(void) intern;
	return *this;
}

Intern::~Intern()
{
	for (int i = 0; i < 3; i++)
		delete this->forms[i];
}

Form *Intern::makeForm(std::string nameForm, std::string target)
{
	this->forms[0] = new PresidentialPardonForm(target);
	this->forms[1] = new RobotomyRequestForm(target);
	this->forms[2] = new ShrubberyCreationForm(target);

	for (int i = 0; i < 3; i++)
	{
		if (nameForm.compare(forms[i]->getName()) == 0)
			return forms[i];
	}
	throw formFailureException();
}

const char* Intern::formFailureException::what(void) const throw()
{
	return ("[Form not Found]\n");
}
