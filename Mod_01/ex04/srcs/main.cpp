/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpernas- <gpernas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 18:19:01 by gpernas-          #+#    #+#             */
/*   Updated: 2022/02/27 21:21:59 by gpernas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <sstream>
#include <fstream>

void	ft_replace(std::istream &ifs, std::ofstream &ofs, char *argv[])
{
	std::string			s1 = argv[2];
	std::string			s2 = argv[3];
	std::string			in_str;
	int pos;

	while (std::getline(ifs, in_str))
	{
		while (in_str.find(s1) != std::string::npos))
		{
			pos = in_str.find(s1);
			in_str.erase(pos, s1.length());
			in_str.insert(pos, s2);
		}
		ofs << in_str << "\n";
	}
}

int main(int argc, char *argv[])
{
	std::ifstream	ifs;
	std::ofstream	ofs;
	
	if (argc != 4)
	{
		std::cout << "error" << std::endl;
		return 0;
	}

	std::string		newFile = argv[1];
	
	newFile.append(".replace");
	ifs.open(argv[1]);
	ofs.open(newFile);

	if (!ifs || !ifs.is_open() || !ofs.is_open())
	{
		std::cout << "error" << std::endl;
		ofs.close();
		return 0;
	}

	ft_replace(ifs, ofs, argv);
	ifs.close();
	ofs.close();

}