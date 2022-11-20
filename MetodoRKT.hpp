#ifndef _METODORKT_
#define _METODORKT_

#include "MetodosNumericos.hpp"
class MetodoRKT : public MetodosNumericos
{
public:
    MetodoRKT(const double, const double, const double, const double);

    const double ResolucionNumerica() const;
    const double getMetodoRKT4() const;

    ~MetodoRKT();
};

#endif
