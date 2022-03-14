#include "../includes/Form.hpp"

Form::Form(std::string name_, std::string target_, int grade_, int execGrade_) : name(name_), target(target_), grade(grade_), execGrade(execGrade_), signed_(0)
{
	if (grade < 1 || execGrade < 1)
		throw GradeTooHighException();
	else if (grade_ > 150 || execGrade > 150)
		throw GradeTooLowException();
}

Form::Form(Form const & form_) : name(form_.name), grade(form_.grade), execGrade(form_.execGrade), signed_(form_.signed_)
{
}

Form&		Form::operator=(Form const & form)
{
	this->signed_ = form.signed_;
	return *this;
}

Form::~Form()
{
}

std::string Form::getName(void) const
{
	return this->name;
}

std::string Form::getTarget(void) const
{
	return this->target;
}

int	Form::getGrade(void) const
{
	return this->grade;
}

int	Form::getExecGrade(void) const
{
	return this->execGrade;
}

bool	Form::isSigned(void) const
{
	return this->signed_;
}

bool	Form::beSigned(Bureaucrat const & bureaucrat)
{
	if (bureaucrat.getGrade() < this->grade)
		return (this->signed_ = true);
	throw GradeTooHighException();
}

std::ostream&		operator<<(std::ostream &o, Form const &Form)
{
	o << Form.getName() << ", Form grade: " << Form.getGrade() << ", Form signed? " << Form.isSigned();
	return o;
}

const char* Form::GradeTooHighException::what(void) const throw()
{
	return ("[Grade Too High Exception]\nGrade 1 is the highest grade.");
}

const char* Form::GradeTooLowException::what(void) const throw()
{
	return ("[Grade Too Low Exception]\nThe grade 150 is the lowest.");
}

const char* Form::notSignedException::what(void) const throw()
{
	return ("[Form is not signed]\nA mediocre Bureaucrat unsucessfully signed this form.");
}