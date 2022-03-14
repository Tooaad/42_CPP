/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpernas- <gpernas-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 12:01:37 by gpernas-          #+#    #+#             */
/*   Updated: 2022/03/14 15:26:13 by gpernas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
# define BRAIN_H

#include <iostream>
#include <string>
#include <sstream>

class Brain {
	
private:

	std::string ideas[100];

public:

	Brain();
	Brain(Brain const & brain_);
	virtual ~Brain();
	Brain&		operator=(Brain const & brain);

};

#endif