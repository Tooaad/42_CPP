/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpernas- <gpernas-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 13:25:22 by gpernas-          #+#    #+#             */
/*   Updated: 2022/02/24 15:21:25 by gpernas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

// int	ft_toupper(int c)
// {
// 	if (c >= 'a' && c <= 'z')
// 		return (c - 32);
// 	return (c);
// }

int main(int argc, char **argv) 
{
	int	i;
	int	j;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	i = 0;
	while (++i < argc)
	{
		j = -1;
		while (argv[i][++j])
			std::cout << (char) toupper(argv[i][j]);
	}
	std::cout << std::endl;
	return (0);
}