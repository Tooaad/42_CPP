/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpernas- <gpernas-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 17:24:51 by gpernas-          #+#    #+#             */
/*   Updated: 2022/02/27 12:45:21 by gpernas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_CLASS_H
# define HUMANB_CLASS_H

#include "Weapon.hpp"

class HumanB {
	
private:

	Weapon		weapon;
	std::string name;
	
public:

	HumanB(std::string name_);
	~HumanB();

	void	attack();
	void	setWeapon(Weapon &weapon_);

};

#endif