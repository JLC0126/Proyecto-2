#ifndef _METODORUKU_
#define _METODORUKU_

#include "MetodosNumericos.hpp"
class MetodoRuKu : public MetodosNumericos
{
public:
    MetodoRuKu(const double, const double, const double, const double);

    double MetodoRuKu1();
    double getMetodoRuKu1();
};

#endif