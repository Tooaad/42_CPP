#include "../includes/Type.hpp"

Type::Type() 
{
}

Type::Type(char* chr_) : chr(chr_)
{
	try
	{
		std::string s(chr);
		this->str = s;
		this->value = std::stod(str);
	}
	catch(const std::exception& e)
	{
		if (this->str.length() == 1)
		{
			this->value = static_cast<char>(this->chr[0]);
			return ;
		}
		this->outOfLimits = true;
		std::cerr << e.what() << '\n';
	}
}

Type::Type(Type const & type_)
{
	this->str = type_.str;
	this->value = type_.value;
	this->outOfLimits = type_.outOfLimits;
}

Type::~Type()
{
}	

Type&		Type::operator=(Type const & type_)
{
	this->str = type_.str;
	this->value = type_.value;
	this->outOfLimits = type_.outOfLimits;
	
	return *this;
}

void		Type::getType(void)
{
	this->toDouble();
	this->toFloat();
	this->toChar();
	this->toInt();
}

void		Type::toChar(void)
{
	std::cout << "char: ";
	if (outOfLimits || isnan(value))
		std::cout << "nan";
	else if (isprint(this->value) == false)
		std::cout << "Non displayeable";
	else
		std::cout << "'" << static_cast<char>(this->value) << "'";
	std::cout << std::endl;
}
void		Type::toInt(void)
{
	std::cout << "int: ";
	if (outOfLimits || isnan(value) || this->value > INT_MAX || this->value < INT_MIN)
		std::cout << "nan";
	else
		std::cout << static_cast<int>(this->value);
	std::cout << std::endl;
}
void		Type::toFloat(void)
{
	std::cout << "float: ";
	if (outOfLimits || isnan(value) || this->value > FLT_MAX || this->value < FLT_MIN)
		std::cout << "impossible";
	else
		std::cout << static_cast<float>(this->value) << "f";
	std::cout << std::endl;
}
void		Type::toDouble(void)
{
	std::cout << "double: ";
	if (outOfLimits || isnan(value))
		std::cout << "impossible";
	else
		std::cout << static_cast<double>(this->value);
	std::cout << std::endl;
}