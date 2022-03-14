/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpernas- <gpernas-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 16:26:29 by gpernas-          #+#    #+#             */
/*   Updated: 2022/03/13 17:21:03 by gpernas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_H
#define ICE_H

#include "AMateria.hpp"

class Ice : virtual public AMateria
{
	public:
		Ice();
		Ice(const Ice &ice_);
		virtual ~Ice();

		Ice &operator=(const Ice &ice_);

		AMateria *clone() const;
		void use(ICharacter &target);
};

#endif