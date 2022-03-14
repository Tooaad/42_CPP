/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpernas- <gpernas-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 12:29:26 by gpernas-          #+#    #+#             */
/*   Updated: 2022/03/14 17:30:00 by gpernas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name_, int grade_) : name(name_)
{
	if (grade_ < 1)
		throw GradeTooHighException();
	else if (grade_ > 150)
		throw GradeTooLowException();
	this->grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const & bureaucrat_) : name(bureaucrat_.name), grade(bureaucrat_.grade)
{
}

Bureaucrat&		Bureaucrat::operator=(Bureaucrat const & bureaucrat_)
{
	// std::string *name_;
	// name_ = (std::string *)(&this->name);
		// Here, we will have this->name pointing name_ that equals to:
		// this->name = name_;
	// *name_ = bureaucrat.name;

	this->grade = bureaucrat_.getGrade();
	return *this;
}

Bureaucrat::~Bureaucrat()
{
}

std::string Bureaucrat::getName(void) const
{
	return this->name;
}

int	Bureaucrat::getGrade(void) const
{
	return this->grade;
}

void	Bureaucrat::increment(void)
{
	if (this->grade > 1)
		this->grade--;
	else
		throw GradeTooHighException();
}

void	Bureaucrat::decrement(void)
{
	if (this->grade < 150)
		this->grade++;
	else
		throw GradeTooLowException();
}

std::ostream&		operator<<(std::ostream &o, Bureaucrat const &bureaucrat)
{
	o << bureaucrat.getName() << ", bureaucrat grade: " << bureaucrat.getGrade();
	return o;
}

const char* Bureaucrat::GradeTooHighException::what(void) const throw()
{
	return ("[Grade Too High Exception]\nGrade 1 is the highest grade.");
}

const char* Bureaucrat::GradeTooLowException::what(void) const throw()
{
	return ("[Grade Too Low Exception]\nThe grade 150 is the lowest.");
}