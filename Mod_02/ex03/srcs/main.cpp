/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpernas- <gpernas-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 11:47:44 by gpernas-          #+#    #+#             */
/*   Updated: 2022/03/03 13:18:10 by gpernas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Point.hpp"

int    main( void ) {
    bool    inside;

    inside = bsp( Point(0, 0), Point(1, 0), Point(0.5, 1), Point(0.5, 0.5));
    std::cout << "Is inside: " << inside << std::endl;

    inside = bsp( Point(0, 0), Point(1, 0), Point(0.5, 1), Point(1, 1));
    std::cout << "Is inside: " << inside << std::endl;

    inside = bsp( Point(0, 0), Point(1, 0), Point(0.5, 1), Point(0, 1));
    std::cout << "Is inside: " << inside << std::endl;

    inside = bsp( Point(0, 0), Point(1, 0), Point(0.5, 1), Point(0.5, 1));
    std::cout << "Is inside: " << inside << std::endl;

    inside = bsp( Point(0, 0), Point(1, 0), Point(0.5, 1), Point(0.44, 0.31));
    std::cout << "Is inside: " << inside << std::endl;
    return (0);
}