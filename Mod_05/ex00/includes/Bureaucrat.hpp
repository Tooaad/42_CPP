/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpernas- <gpernas-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 12:29:20 by gpernas-          #+#    #+#             */
/*   Updated: 2022/03/14 16:58:43 by gpernas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

#include <iostream>
#include <string>
#include <exception>

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