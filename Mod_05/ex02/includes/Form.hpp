/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpernas- <gpernas-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 12:30:26 by gpernas-          #+#    #+#             */
/*   Updated: 2022/03/07 12:19:23 by gpernas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
# define FORM_H

#include <iostream>
#include <string>
#include <sstream>
#include <exception>
#include <fstream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {

public:

	Form();
	Form(std::string name_, std::string target, int grade_, int execGrade);
	// Form(Form const & form_);
	virtual ~Form();
	Form&		operator=(Form const & form);
	
	std::string		getName(void) const;
	std::string		getTarget(void) const;
	int 			getGrade(void) const;
	int				getExecGrade(void) const;
	bool			isSigned(void) const;
	bool			beSigned(Bureaucrat const & bureaucrat);
	void			execute(Bureaucrat const & executor) const;

	class GradeTooHighException : public std::exception {
		public:
			const char *what(void) const throw();
	};

	class GradeTooLowException : public std::exception {
		public:
			const char *what(void) const throw();
	};

	class notSignedException : public std::exception {
		public:
			const char *what(void) const throw();
	};

private:

	std::string 	name;
	std::string		target;
	int				grade;
	int				execGrade;
	bool			signed_;
	
};
std::ostream&		operator<<(std::ostream &o, Form const &Form);


#endif