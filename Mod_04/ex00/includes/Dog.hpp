/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpernas- <gpernas-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 12:01:40 by gpernas-          #+#    #+#             */
/*   Updated: 2022/03/06 13:20:50 by gpernas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H

#include <iostream>
#include <string>
#include <sstream>
#include "Animal.hpp"

class Dog : public Animal {

public:

	Dog();
	Dog(Dog const & dog_);
	~Dog();
		
	virtual void		makeSound(void) const;
};


#endif