/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpernas- <gpernas-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 17:48:28 by gpernas-          #+#    #+#             */
/*   Updated: 2022/02/25 11:22:17 by gpernas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE1_CLASS_H
# define ZOMBIE1_CLASS_H

#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>

class Zombie {

private:
	
	std::string	_name;

public:
	
	Zombie();
	~Zombie();

	void	announce(void);
	void	set_name(std::string name);
};

Zombie *zombieHorde(int n, std::string name);

#endif