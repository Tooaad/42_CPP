/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpernas- <gpernas-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 12:01:37 by gpernas-          #+#    #+#             */
/*   Updated: 2022/03/14 16:19:52 by gpernas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
# define ANIMAL_H

#include <iostream>
#include <string>

class Animal {
	
protected:

	std::string type;

public:

	Animal();
	Animal(std::string type_);
	Animal(Animal const & animal_);
	virtual ~Animal();
	Animal&		operator=(Animal const & animal);
	
	const std::string&	getType(void) const;
	virtual void	makeSound(void) const = 0;
};

#endif