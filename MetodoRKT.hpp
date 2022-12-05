#ifndef _METODORKT_
#define _METODORKT_

#include "MetodosNumericos.hpp"
class MetodoRKT : public MetodosNumericos
{
public:
    MetodoRKT(const double, const double, const double, const double);

    const double Solver() const;

    const double getMetodoRKT() const;

    const int getOrden() const;

    ~MetodoRKT();

private:
    int orden;    
};

#endif
