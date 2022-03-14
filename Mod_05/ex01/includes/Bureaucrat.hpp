/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpernas- <gpernas-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 12:29:05 by gpernas-          #+#    #+#             */
/*   Updated: 2022/03/14 17:26:37 by gpernas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

#include <iostream>
#include <string>
#include <sstream>
#include <exception>
#include "Form.hpp"

class Form;

class Bureaucrat {

private:

	std::string const	name;
	int 				grade;

public:

	Bureaucrat(std::string name_, int grade_);
	Bureaucrat(Bureaucrat const & bureaucrat_);
	~Bureaucrat();
	Bureaucrat&		operator=(Bureaucrat const & Bureaucrat);
	
	std::string		getName(void) const;
	int 			getGrade(void) const;

	void 				increment(void);
	void				decrement(void);
	void				signForm(Form form) const;

	class GradeTooHighException : public std::exception {
		public:
			const char *what(void) const throw();
	};

	class GradeTooLowException : public std::exception {
		public:
			const char *what(void) const throw();
	};

};
std::ostream&		operator<<(std::ostream &o, Bureaucrat const &bureaucrat);


#endif