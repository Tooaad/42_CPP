#ifndef INTERN_H
# define INTERN_H

#include <iostream>
#include <string>
#include <sstream>
#include <exception>
#include <fstream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

class Bureaucrat;

class Intern {

public:

	Intern(void);
	Intern(Intern const & target_);
	~Intern(void);
	Intern&		operator=(Intern const & intern);
	
	Form*		makeForm(std::string nameForm, std::string target);

	class formFailureException : public std::exception {
		public:
			const char *what(void) const throw();
	};

private:

	Form *forms[3];
	
};

#endif