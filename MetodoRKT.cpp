#include "MetodosNumericos.hpp"
#include "MetodoRKT.hpp"
#include"configs.hpp"
#include"func_test.hpp"

#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <iomanip>
using std::setw;
#include <math.h>

MetodoRKT::MetodoRKT(const double _Xo, const double _Yo, const double _Xf, const double Orden) : MetodosNumericos(_Xo, _Yo, _Xf)
{
    this->orden = Orden;
}

const double MetodoRKT::Solver() const
{
    double  c1, c2, c3, c4, c5, c6, _Xf, _Xo, _f = 0.0, _Yo, k1, k2, k3, k4;
    _Xo = this->getX_0();
    _Yo = this->getY_0();
    _Xf = this->getX_f();

    switch (this->orden)
    {
    case 2:
    {
        cout << "Runge-Kutta 2do orden" << endl;
    cout << setw(10) << "X" << setw(10) << "Y" << setw(10) << "k1" << setw(10) << "c1" << setw(10) << "c2" << setw(10) << "k2" << endl;

    cout.precision(4);

    for (int i = _Xo; _Xo <= _Xf; _Xo += H)
    {
        _f = p(_Xo,_Yo);
        k1 = _f * H;
        c1 = (_Xo + H);
        c2 = (_Yo + k1);
        k2 = H * p(c1,c2);
        cout << setw(10) << _Xo << setw(10) << _Yo << setw(10) << k1 << setw(10) << c1 << setw(10) << c2 << setw(10) << k2 << endl;
        _Yo = _Yo + (((k1 + k2) / 2));
    }
    cout << endl;
    return _Yo;
    }
    break;
    case 4:
    {
        cout << "Runge-Kutta 4to orden" << endl;
    cout << setw(10) << "X" << setw(10) << "Y" << setw(10) << "k1" << setw(5) << "c1" << setw(10) << "c2" << setw(10) << "k2" << setw(5) << "c3" << setw(10) << "c4" << setw(10) << "k3" << setw(5) << "c5" << setw(10) << "c6" << setw(10) << "k4" << endl;

    cout.precision(4);

    for (int i = _Xo; _Xo <= _Xf; _Xo += H)
    {
         _f = p(_Xo,_Yo);
        k1 = _f;
        c1 = _Xo + (H / 2);
        c2 = _Yo + (k1 * H / 2);
        k2= p(c1,c2);
        c3 = _Xo + (H / 2);
        c4 = _Yo + (k2 * H / 2);
        k3 = p(c3,c4);
        c5 = _Xo + H;
        c6 = _Yo + (k3 * H);
        k4 = p(c5,c6);
        cout << setw(10) << _Xo << setw(10) << _Yo << setw(10) << k1 << setw(5) << c1 << setw(10) << c2 << setw(10) << k2 << setw(5) << c3 << setw(10) << c4 << setw(10) << k3 << setw(5) << c5 << setw(10) << c6 << setw(10) << k4 << endl;
        _Yo = _Yo + ((H / 6) * (k1 + (2 * k2) + (2 * k3) + k4));
    }
    cout << endl;
    return _Yo;
    }
    break;
    }

    
}

const int MetodoRKT::getOrden() const
{
    return this->orden;
}

const double MetodoRKT::getMetodoRKT() const
{
    return MetodoRKT::Solver();
}

MetodoRKT::~MetodoRKT()
{
}



