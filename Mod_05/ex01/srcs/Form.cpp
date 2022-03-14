#include "../includes/Form.hpp"

Form::Form(std::string name_, int grade_, int exec_) : name(name_), grade(grade_), exec(exec_), signed_(0)
{
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade_ > 150)
		throw GradeTooLowException();
}

Form::Form(Form const & form_) : name(form_.name), grade(form_.grade), exec(form_.exec), signed_(form_.signed_)
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

Form&		Form::operator=(Form const & form_)
{
	this->signed_ = form_.signed_;
	return *this;
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
	if (bureaucrat.getGrade() < this->grade)
		return (this->signed_ = true);
	else 
		bureaucrat.signForm(*this);
	return this->signed_;
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