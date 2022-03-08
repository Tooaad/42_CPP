#include "../includes/Type.hpp"

Type::Type() 
{
}

Type::Type(std::string str_) : str(str_)
{
}

Type::Type(Type const & type_)
{
	this->str = type_.str;
	this->c = type_.c;
	this->i = type_.i;
	this->f = type_.f;
	this->d = type_.d;
}

Type::~Type()
{

}	

Type&		Type::operator=(Type const & type_)
{
	this->str = type_.str;
	this->c = type_.c;
	this->i = type_.i;
	this->f = type_.f;
	this->d = type_.d;
	return *this;

}

void		Type::getType(void)
{

	

	this->toDouble();
	this->toFloat();
	this->toChar();
	this->toInt();
	std::cout << d << std::endl;
	std::cout << f << std::endl;
	std::cout << i << std::endl;	
	std::cout << c << std::endl;

}

void		Type::toChar(void)
{
	c = (unsigned char) i;
}
void		Type::toInt(void)
{
	i = d;
}
void		Type::toFloat(void)
{
	f = d;
}
void		Type::toDouble(void)
{
	d = std::stod(str);
}