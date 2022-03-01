/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpernas- <gpernas-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 18:19:01 by gpernas-          #+#    #+#             */
/*   Updated: 2022/02/28 18:30:51 by gpernas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Karen.hpp"

int main(int argc, char *argv[])
{
	Karen Karen;

	if (argc != 2)
	{
		std::cout << "error" << std::endl;
		return 0;
	}

	Karen.complain(argv[1]);
	return 0;
}

