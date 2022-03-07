/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpernas- <gpernas-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 12:27:13 by gpernas-          #+#    #+#             */
/*   Updated: 2022/03/04 14:43:05 by gpernas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain created" << std::endl;
}

Brain::Brain(Brain const & brain_)
{
	*this = brain_;
	std::cout << "Brain copied from " << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain destructed" << std::endl;
}

Brain& Brain::operator=(Brain const & brain_)
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = brain_.ideas[i];
	return *this;
}
