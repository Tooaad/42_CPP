/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpernas- <gpernas-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 17:23:53 by gpernas-          #+#    #+#             */
/*   Updated: 2022/03/03 11:36:17 by gpernas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"

int	main(void)
{   
    
    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << Fixed::max( a, b ) << std::endl;
    
    
    Fixed z(1);
    Fixed y(0.5f);
    Fixed x(z);
    bool patata;
    
    patata = z > y;
    std::cout << patata << std::endl;
    patata = z < y;
    std::cout << patata << std::endl;
    patata = z >= x;
    std::cout << patata << std::endl;
    patata = z <= x;
    std::cout << patata << std::endl;
    patata = z == x;
    std::cout << patata << std::endl;
    patata = z != x;
    std::cout << patata << std::endl;
    
    z = x + y;
    std::cout << z << std::endl;
    z = x - y;
    std::cout << z << std::endl;
    z = x * y;
    std::cout << z << std::endl;
    z = x / y;
    std::cout << z << std::endl;
    
    // ++
    
    std::cout << ++z << std::endl;
    ++z;
    std::cout << z << std::endl;

    std::cout << z++ << std::endl;
    z++;
    std::cout << z << std::endl;

    // --

    std::cout << --z << std::endl;
    --z;
    std::cout << z << std::endl;

    std::cout << z-- << std::endl;
    z--;
    std::cout << z << std::endl;

    // min / max
    Fixed t(1);
    Fixed q(0.5f);
    std::cout << "Min: " << Fixed::min(q, t) << std::endl;
    std::cout << "Max: " << Fixed::max(q, t) << std::endl;

    Fixed const u(1);
    Fixed const w(0.5f);
    std::cout << "Min: " << Fixed::min(u, w) << std::endl;
    std::cout << "Max: " << Fixed::max(u, w) << std::endl;
    
    return (0);
}
