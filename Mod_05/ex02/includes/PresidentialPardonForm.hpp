#ifndef PPF_H
# define PPF_H

#include <iostream>
#include <string>
#include <sstream>
#include <exception>
#include "Form.hpp"
#include "Bureaucrat.hpp"

class Bureaucrat;

class PresidentialPardonForm : public Form {

	public:

		PresidentialPardonForm();
		PresidentialPardonForm(std::string target_);
		virtual ~PresidentialPardonForm();
			
		virtual void			execute(Bureaucrat const & executor) const;


	private:
		void pardon() const;

};
#endif