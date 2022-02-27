/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpernas- <gpernas-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 17:24:51 by gpernas-          #+#    #+#             */
/*   Updated: 2022/02/27 13:18:35 by gpernas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_CLASS_H
# define HUMANA_CLASS_H

#include "Weapon.hpp"

class HumanA {
	
private:

	Weapon		weapon;
	std::string name;
	
public:

	HumanA(std::string name_, Weapon &weapon_name);
	~HumanA();

	void	attack();

};

#endif