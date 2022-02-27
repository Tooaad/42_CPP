/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpernas- <gpernas-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 17:21:11 by gpernas-          #+#    #+#             */
/*   Updated: 2022/02/27 13:37:10 by gpernas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_CLASS_H
# define WEAPON_CLASS_H

#include <iostream>
#include <string>
#include <sstream>

class Weapon {
	
private:

	std::string type;
	
public:

	Weapon(std::string weapon_name);
	~Weapon();

	std::string getType(void);
	void		setType(std::string weapon_name);


};

#endif