/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpernas- <gpernas-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 12:01:40 by gpernas-          #+#    #+#             */
/*   Updated: 2022/03/14 11:16:21 by gpernas-         ###   ########.fr       */
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
	virtual ~Dog();
		
	virtual void		makeSound(void) const;
};


#endif