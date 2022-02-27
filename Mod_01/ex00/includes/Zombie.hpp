/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpernas- <gpernas-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 17:48:28 by gpernas-          #+#    #+#             */
/*   Updated: 2022/02/25 11:09:31 by gpernas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_CLASS_H
# define ZOMBIE_CLASS_H

#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>

class Zombie {

private:
	
	std::string	_name;

public:
	
	Zombie(std::string name);
	~Zombie();

	void	announce(void);
};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

#endif