/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpernas- <gpernas-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 11:04:03 by gpernas-          #+#    #+#             */
/*   Updated: 2022/03/04 11:28:13 by gpernas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_H
# define DIAMONDTRAP_H

#include <iostream>
#include <string>
#include <sstream>
#include "../includes/FragTrap.hpp"
#include "../includes/ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{

private:

	std::string name;
	
public:

	DiamondTrap();
	DiamondTrap(std::string name_);
	~DiamondTrap();

	void		attack(std::string const & target);
	void		whoAmI();

};

#endif