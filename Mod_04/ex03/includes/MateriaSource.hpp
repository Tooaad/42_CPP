/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpernas- <gpernas-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 13:00:25 by gpernas-          #+#    #+#             */
/*   Updated: 2022/03/05 19:52:00 by gpernas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_H
# define MATERIASOURCE_H

#include "../includes/AMateria.hpp"
#include "../includes/IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {

private:
	AMateria* source[4];

public:

	MateriaSource();
	~MateriaSource();
	MateriaSource(MateriaSource const & materiasource_);
	MateriaSource&		operator=(MateriaSource const & materiasource_);
	
	void learnMateria(AMateria* m);
	AMateria* createMateria(std::string const & type);
	
};

#endif