/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpernas- <gpernas-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 12:01:08 by gpernas-          #+#    #+#             */
/*   Updated: 2022/03/18 11:40:21 by gpernas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"
#include "../includes/Cat.hpp"
#include "../includes/Dog.hpp"
#include "../includes/WrongAnimal.hpp"
#include "../includes/WrongCat.hpp"

int main()
{
	//
	Animal* animals[10];
	for (int i = 0; i < 10;)
	{
		animals[i++] = new Dog();
		animals[i++] = new Cat();
	}

	for (int i = 0; i < 10; i++)
	{
		delete animals[i];
		std::cout << std::endl;
	}

	//
	std::cout << "\n";
	Cat*	cat1 = new Cat();
	Cat		cat2 = *cat1;

	delete cat1;

	return 0;
}