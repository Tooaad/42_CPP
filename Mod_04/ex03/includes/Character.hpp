/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpernas- <gpernas-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 16:26:29 by gpernas-          #+#    #+#             */
/*   Updated: 2022/03/13 17:37:58 by gpernas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
#define CHARACTER_H

#include <iostream>
#include "ICharacter.hpp"

class Character : public ICharacter
{
	private:
		AMateria *materia[4];
		size_t amount;
		std::string name;
		
	public:
		Character();
		Character(const Character & character_);
		Character(std::string name);
		virtual	~Character();
		Character & operator= (const Character & character_);

		void				equip(AMateria* m);
		void				unequip(int idx);
		void				use(int idx, ICharacter& target);
		std::string const & getName() const;
};

#endif