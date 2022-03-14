/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpernas- <gpernas-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 16:26:29 by gpernas-          #+#    #+#             */
/*   Updated: 2022/03/13 17:21:28 by gpernas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_H
#define CURE_H

#include "AMateria.hpp"
class Cure : virtual public AMateria
{
	public:
		Cure();
		Cure(const Cure &cure_);
		virtual ~Cure();

		Cure &operator=(const Cure &cure_);

		void use(ICharacter &target);
		AMateria *clone() const;
};

#endif