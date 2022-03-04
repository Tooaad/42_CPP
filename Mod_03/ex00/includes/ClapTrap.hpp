/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpernas- <gpernas-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 18:02:53 by gpernas-          #+#    #+#             */
/*   Updated: 2022/03/03 23:24:54 by gpernas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

#include <iostream>
#include <string>
#include <sstream>

class ClapTrap
{
private:

	std::string		name;
	int				hitPoints;
	int				energyPoints;
	int				attackDamage;
	
public:

	ClapTrap();
	ClapTrap(std::string name_);
	ClapTrap(ClapTrap const & claptrap);
	ClapTrap&		operator=(ClapTrap const & claptrap);
	~ClapTrap();

	void			attack(std::string const & target);
	void			takeDamage(unsigned int amount);
	void			beRepaired(unsigned int amount);
	
	

};

#endif