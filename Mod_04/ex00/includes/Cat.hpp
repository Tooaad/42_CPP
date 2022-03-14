/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpernas- <gpernas-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 12:01:35 by gpernas-          #+#    #+#             */
/*   Updated: 2022/03/14 15:55:32 by gpernas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H

#include <iostream>
#include <string>
#include <sstream>
#include "Animal.hpp"

class Cat : public Animal {

public:

	Cat();
	Cat(Cat const & cat_);
	virtual ~Cat();
	
	virtual void		makeSound(void) const;
};


#endif