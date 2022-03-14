#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("PresidentialPardonForm", "none", 25, 5)
{
}

PresidentialPardonForm::PresidentialPardonForm(std::string target_) : Form("PresidentialPardonForm", target_, 25, 5)
{
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}
	
void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (!this->isSigned())
		throw notSignedException();
	if (executor.getGrade() > this->getExecGrade())
		throw GradeTooLowException();
	pardon();
}

void	PresidentialPardonForm::pardon() const
{
	std::cout << getTarget() << " has been pardoned by Zafod Beeblebrox." << std::endl;
}