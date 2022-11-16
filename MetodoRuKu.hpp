#ifndef _METODORUKU_
#define _METODORUKU_

#include "MetodosNumericos.hpp"
class MetodoRuKu : public MetodosNumericos
{
public:
    MetodoRuKu(const double, const double, const double, const double);

    const double MetodoRuKu2() const;
    const double getMetodoRuKu2() const;
};

#endif
