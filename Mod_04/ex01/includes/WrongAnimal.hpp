/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpernas- <gpernas-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 12:01:37 by gpernas-          #+#    #+#             */
/*   Updated: 2022/03/04 13:22:28 by gpernas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_H
# define WRONGANIMAL_H

#include <iostream>
#include <string>
#include <sstream>

class WrongAnimal {
	
protected:

	std::string type;

public:

	WrongAnimal();
	WrongAnimal(std::string type_);
	WrongAnimal(WrongAnimal const & wanimal_);
	~WrongAnimal();
	WrongAnimal&		operator=(WrongAnimal const & animal);
	
	const std::string&	getType(void) const;
	void	makeSound(void) const;
};

#endif