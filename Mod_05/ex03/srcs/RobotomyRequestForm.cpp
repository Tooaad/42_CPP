#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm", "none", 72, 45)
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string target_) : Form("RobotomyRequestForm", target_, 72, 45)
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}
	
void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (!this->isSigned())
		throw notSignedException();
	if (executor.getGrade() > this->getExecGrade())
		throw GradeTooLowException();
	drillNoise();
}

void	RobotomyRequestForm::drillNoise() const
{
	int robotomization = rand() % 100;

	if (robotomization > 50)
		std::cout << "@<$<<$!+&%<$+%%<!" << this->getTarget()
		<< " has been robotomized: "<< robotomization << std::endl;
	else
		std::cout << "Robotomization failure" << std::endl;

}