/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Class.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpernas- <gpernas-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 20:20:19 by gpernas-          #+#    #+#             */
/*   Updated: 2022/03/13 20:22:26 by gpernas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASS_H
#define CLASS_H

#include <stdlib.h>
#include <iostream>

class Base
{
	public:
		virtual ~Base(){};
};

class A : public Base
{
};
class B : public Base
{
};
class C : public Base
{
};

Base *generate(void);
void identify(Base *p);

#endif