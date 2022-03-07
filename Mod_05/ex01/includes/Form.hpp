/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpernas- <gpernas-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 12:30:26 by gpernas-          #+#    #+#             */
/*   Updated: 2022/03/06 13:33:44 by gpernas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
# define FORM_H

#include <iostream>
#include <string>
#include <sstream>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {

private:

	std::string const	name;
	int			const	grade;
	bool				signed_;

public:

	Form(std::string name_, int grade_);
	// Form(Form const & form_);
	~Form();
	Form&		operator=(Form const & form);
	
	std::string		getName(void) const;
	int 			getGrade(void) const;
	bool			isSigned(void) const;
	bool			beSigned(Bureaucrat const & bureaucrat);

	class GradeTooHighException : public std::exception {
		public:
			const char *what(void) const throw();
	};

	class GradeTooLowException : public std::exception {
		public:
			const char *what(void) const throw();
	};

};
std::ostream&		operator<<(std::ostream &o, Form const &Form);


#endif