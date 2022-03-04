/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpernas- <gpernas-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 00:34:00 by gpernas-          #+#    #+#             */
/*   Updated: 2022/03/04 11:39:55 by gpernas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
# define FRAGTRAP_H

#include <iostream>
#include <string>
#include <sstream>
#include "../includes/ClapTrap.hpp"

class FragTrap : public ClapTrap
{

public:

	FragTrap();
	FragTrap(std::string name_);
	~FragTrap();

	void		attack(std::string const & target);
	void		highFivesGuys(void);	

};

#endif