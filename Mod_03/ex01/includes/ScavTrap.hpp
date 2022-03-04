/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpernas- <gpernas-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 00:12:40 by gpernas-          #+#    #+#             */
/*   Updated: 2022/03/04 00:29:15 by gpernas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H

#include <iostream>
#include <string>
#include <sstream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	
public:

	ScavTrap();
	ScavTrap(std::string name_);
	~ScavTrap();

	void		attack(std::string const & target);
	void		guardGate(void);
	
};

#endif