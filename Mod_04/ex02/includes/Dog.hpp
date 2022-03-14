/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpernas- <gpernas-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 12:01:40 by gpernas-          #+#    #+#             */
/*   Updated: 2022/03/14 16:15:36 by gpernas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H

#include <iostream>
#include <string>
#include "../includes/Animal.hpp"
#include "../includes/Brain.hpp"

class Dog : public Animal {

private:

	Brain* brain;

public:

	Dog();
	Dog(Dog const & dog_);
	virtual ~Dog();
		
	virtual void		makeSound(void) const;
};


#endif