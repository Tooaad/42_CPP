/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpernas- <gpernas-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 20:21:52 by gpernas-          #+#    #+#             */
/*   Updated: 2022/03/13 21:00:10 by gpernas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Class.hpp"

Base *generate(void)
{
	int genClass;
	genClass = rand() % 3;

	switch (genClass)
	{
	case 0:
		return new A();
	case 1:
		return new B();
	default:
		return new C();
	}
}

void identify(Base *p)
{
	if (dynamic_cast<A *> (p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B *> (p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C *> (p))
		std::cout << "C" << std::endl;
}

int main()
{
	Base *c = generate();
	identify(c);
	delete c;
	return 0;
}