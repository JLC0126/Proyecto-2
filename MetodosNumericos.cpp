#include "MetodosNumericos.hpp"
#include <iostream>
using namespace std;
MetodosNumericos::MetodosNumericos(double x_0, double y_0, double x_f)
{

    this->x_0 = x_0;
    this->y_0 = y_0;
    this->x_f = x_f;
}

MetodosNumericos::MetodosNumericos(double x_0, double x_f)
{
    this->x_0 = x_0;
    this->x_f = x_f;
}

double MetodosNumericos::getX_0() const
{
    return x_0;
}

double MetodosNumericos::getY_0() const
{
    return y_0;
}

double MetodosNumericos::getX_f() const
{
    return x_f;
}
