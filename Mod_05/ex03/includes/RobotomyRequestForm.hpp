/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpernas- <gpernas-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 20:04:22 by gpernas-          #+#    #+#             */
/*   Updated: 2022/03/14 21:13:01 by gpernas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RQF_H
# define RQF_H

#include <iostream>
#include <string>
#include <sstream>
#include <exception>
#include <random>
#include "Form.hpp"
#include "Bureaucrat.hpp"

class Bureaucrat;

class RobotomyRequestForm : public Form {

	public:

		RobotomyRequestForm();
		RobotomyRequestForm(std::string target_);
		virtual ~RobotomyRequestForm();
			
		virtual void			execute(Bureaucrat const & executor) const;


	private:
		void drillNoise() const;

};
#endif