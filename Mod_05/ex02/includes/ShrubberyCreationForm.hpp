/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpernas- <gpernas-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 20:02:58 by gpernas-          #+#    #+#             */
/*   Updated: 2022/03/07 12:07:57 by gpernas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCH_H
# define SCH_H

#include <iostream>
#include <string>
#include <sstream>
#include <exception>
#include "Form.hpp"
#include "Bureaucrat.hpp"

class Bureaucrat;

class ShrubberyCreationForm : public virtual Form {

public:

	ShrubberyCreationForm();
	ShrubberyCreationForm(std::string target);
	// ShrubberyCreationForm(ShrubberyCreationForm const & SCF);
	~ShrubberyCreationForm();
	// ShrubberyCreationForm&		operator=(ShrubberyCreationForm const & SCF);
		
	void			execute(Bureaucrat const & executor) const;


private:
	void makeTree() const;

};
#endif