/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpernas- <gpernas-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 16:26:29 by gpernas-          #+#    #+#             */
/*   Updated: 2022/03/13 17:21:42 by gpernas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_H
#define AMATERIA_H

#include <string>
#include <iostream>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{	
	protected:
		std::string type;

	public:
		AMateria();
		AMateria(std::string const &type_);
		AMateria(const AMateria & amteria);
		virtual ~AMateria();
		AMateria& operator=(const AMateria & amateria);

		std::string const & 		getType() const;
		virtual	void				use(ICharacter& target) = 0;
		virtual AMateria*			clone () const = 0;

};

#endif