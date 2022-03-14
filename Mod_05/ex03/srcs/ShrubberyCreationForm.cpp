#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreationForm", "none", 145, 137)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target_) : Form("ShrubberyCreationForm", target_, 145, 137)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}
	
void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (!this->isSigned())
		throw notSignedException();
	if (executor.getGrade() > this->getExecGrade())
		throw GradeTooLowException();
	makeTree();
}

void	ShrubberyCreationForm::makeTree() const
{
	std::ofstream ofs(getTarget().append("_shrubbery"));

	ofs 		<< "           {{ }{\n"
				 "          {{}}}{{\n"
				 "        {{}}{}}\n"
				 "           }}}}{\n"
				 "          {{}}}\n"
				 "         }{{}{}}\n"
				 "           {{}{}}\n"
				 "         }}{{}}\n"
				 "          {{}}{{\n"
				 "           \\  /\n"
				 "        .-''| |``-.\n"
				 "       '-._/_o_\\_.-'\n"
				 "        `._     _.'\n"
				 "         | :F_P: |\n"
				 "         `._    .'\n"
				 "            `--'";

	ofs.close();
}