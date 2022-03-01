#include "../includes/Karen.hpp"

Karen::Karen(void)
{
	this->comment[0].name = "DEBUG";
	this->comment[0].ptr = &Karen::debug;
	
	this->comment[1].name = "INFO";
	this->comment[1].ptr = &Karen::info;
	
	this->comment[2].name = "WARNING";
	this->comment[2].ptr = &Karen::warning;
	
	this->comment[3].name = "ERROR";
	this->comment[3].ptr = &Karen::error;

}

Karen::~Karen(void)
{
}

void	Karen::debug(void)
{
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void	Karen::info(void)
{
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void	Karen::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}

void	Karen::error(void)
{
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void	Karen::complain(std::string level)
{
	for (int i = 0; i < 4; i++)
	{
		if (comment[i].name.compare(level) == 0)
			(this->*(comment[i].ptr))();
	}
}