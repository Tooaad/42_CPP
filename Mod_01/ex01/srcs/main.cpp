/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpernas- <gpernas-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 17:23:53 by gpernas-          #+#    #+#             */
/*   Updated: 2022/02/25 11:36:01 by gpernas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

int	main(void)
{
	Zombie	*horde;
	int tropes = 5;

	horde = zombieHorde(tropes, "walkers");
	for (int i = 0; i < tropes; i++)
		horde->announce();

	delete [] horde;	
	return 0;