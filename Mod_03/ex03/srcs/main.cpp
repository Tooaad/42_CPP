/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpernas- <gpernas-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 17:23:53 by gpernas-          #+#    #+#             */
/*   Updated: 2022/03/04 11:39:18 by gpernas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/FragTrap.hpp"
#include "../includes/ScavTrap.hpp"
#include "../includes/DiamondTrap.hpp"

int	main(void)
{
    // DiamondTrap //
    DiamondTrap    ct2 = DiamondTrap("ct2");
    
    ct2.attack("ct1");
    ct2.takeDamage(15);
    ct2.beRepaired(15);
    ct2.whoAmI();
   
	return 0;
}