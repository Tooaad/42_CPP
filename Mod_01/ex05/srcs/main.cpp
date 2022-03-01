/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpernas- <gpernas-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 18:19:01 by gpernas-          #+#    #+#             */
/*   Updated: 2022/02/28 23:28:11 by gpernas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Karen.hpp"

int main(void)
{
	Karen Karen;

	Karen.complain("DEBUG");
	Karen.complain("INFO");
	Karen.complain("WARNING");
	Karen.complain("ERROR");
}

