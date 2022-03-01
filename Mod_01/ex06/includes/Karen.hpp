#ifndef KAREN_CLASS_H
# define KAREN_CLASS_H

#include <iostream>
#include <string>
#include <sstream>

class Karen {

    typedef struct  s_status
    {
        std::string name;
        void(Karen::*ptr)(void);
    }               t_status;

private:

    t_status comment[4];
    void    debug(void);
    void    info(void);
    void    warning(void);
    void    error(void);

public:

    Karen();
    ~Karen();

    void    complain(std::string level);
    void    life_isa_pain(void);

};

#endif