/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpernas- <gpernas-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 02:04:08 by gpernas-          #+#    #+#             */
/*   Updated: 2022/02/25 11:28:41 by gpernas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

Zombie *zombieHorde(int n, std::string name)
{
	if (n <= 0)
		return NULL;

	Zombie *zomb_horde = new Zombie[n];

	for (int i = 0; i < n; i++)
		zomb_horde[i].set_name(name);

	return (zomb_horde);
}