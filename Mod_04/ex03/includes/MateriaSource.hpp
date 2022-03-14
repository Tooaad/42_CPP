/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpernas- <gpernas-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 16:26:29 by gpernas-          #+#    #+#             */
/*   Updated: 2022/03/13 17:17:28 by gpernas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_H
#define MATERIASOURCE_H

#include "IMateriaSource.hpp"
class MateriaSource : public IMateriaSource
{
	private:
		size_t amount;
		AMateria *materia_source[4];

	public:
		MateriaSource();
		MateriaSource(const MateriaSource &materiasource_);
		virtual ~MateriaSource();

		MateriaSource &operator=(const MateriaSource &materiasource_);
		void learnMateria(AMateria *new_materia);
		AMateria *createMateria(std::string const &type);
};

#endif