#include "../includes/Form.hpp"

Form::Form(std::string name_, int grade_) : name(name_), grade(grade_), signed_(0)
{
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade_ > 150)
		throw GradeTooLowException();
}

// Form::Form(Form const & form_) : signed_(0)
// {
// 	*this = form_;
// }

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

int	Form::getGrade(void) const
{
	return this->grade;
}

bool	Form::isSigned(void) const
{
	return this->signed_;
}

bool	Form::beSigned(Bureaucrat const & bureaucrat)
{
	return (bureaucrat.getGrade() < this->grade)? (this->signed_ = true) : throw GradeTooLowException();
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