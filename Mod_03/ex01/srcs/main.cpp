/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpernas- <gpernas-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 17:23:53 by gpernas-          #+#    #+#             */
/*   Updated: 2022/03/04 00:32:54 by gpernas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScavTrap.hpp"

int	main(void)
{
    // ClapTrap // 
	ClapTrap    ct1 = ClapTrap();
    ClapTrap    ct2 = ClapTrap("ct2");
    ClapTrap    ct3 = ClapTrap("ct3");
    ClapTrap    ct4 = ct3;

    ct1.attack("ct2");
    ct1.takeDamage(5);
    ct1.beRepaired(25);
    
    ct2.attack("ct1");
    ct2.takeDamage(15);
    ct2.beRepaired(15);

    ct4.attack("ct1");
    ct4.takeDamage(22);
    ct4.beRepaired(22);

    // ScavTrap //
    ScavTrap    ct5 = ScavTrap("ct5");
    ScavTrap    ct6 = ScavTrap("ct6");
    ScavTrap    ct7 = ct6;
    
    ct5.attack("ct1");
    ct5.takeDamage(15);
    ct5.beRepaired(15);
    ct5.guardGate();

    ct7.attack("ct1");
    ct7.takeDamage(22);
    ct7.beRepaired(22);
   
	return 0;
}