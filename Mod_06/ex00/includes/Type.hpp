#ifndef TYPE_H
# define TYPE_H

#include <iostream>
#include <string>
#include <cmath>
#include <cfloat>
#include <limits>


class Type {

private:

	char		*chr;
	std::string	str;
	double		value;
	bool		outOfLimits;

public:

	Type();
	Type(char *name_);
	Type(Type const & type_);
	~Type();
	Type&		operator=(Type const & type);

	void		getType(void);
	void		toChar(void);
	void		toInt(void);
	void		toFloat(void);
	void		toDouble(void);

};

#endif