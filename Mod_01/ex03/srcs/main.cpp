/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpernas- <gpernas-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 11:47:44 by gpernas-          #+#    #+#             */
/*   Updated: 2022/02/27 13:35:28 by gpernas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

int main(void)
{
	{
		Weapon club = Weapon("crude spiked club");
		//HumanA
		
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		std::cout << club.getType() << std::endl;
		
		bob.attack();
	}
	// std::cout << club.getType() << std::endl;
	std::cout << std::endl;
	{
		Weapon club = Weapon("crude spiked club");
		//HumanB
		
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.setWeapon(club);
		jim.attack();
	}
}