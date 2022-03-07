/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpernas- <gpernas-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 12:01:40 by gpernas-          #+#    #+#             */
/*   Updated: 2022/03/04 13:57:19 by gpernas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H

#include <iostream>
#include <string>
#include <sstream>
#include "../includes/Animal.hpp"
#include "../includes/Brain.hpp"

class Dog : public Animal {

private:

	Brain* brain;

public:

	Dog();
	Dog(Dog const & dog_);
	~Dog();
		
	virtual void		makeSound(void) const;
};


#endif