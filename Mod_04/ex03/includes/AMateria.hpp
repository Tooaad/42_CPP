/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpernas- <gpernas-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 01:54:34 by gpernas-          #+#    #+#             */
/*   Updated: 2022/03/05 18:41:32 by gpernas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_H
# define AMATERIA_H

#include "../includes/ICharacter.hpp"

class AMateria {
	
protected:

	std::string type;

public:

	AMateria();
	AMateria(std::string type_);
	AMateria(AMateria const & amateria_);
	virtual ~AMateria();
	AMateria&		operator=(AMateria const & amateria);
	
	std::string const &	getType(void) const;
	
	virtual AMateria* clone(void) const = 0;
	virtual void use(ICharacter& target);
};

#endif