#include "MetodosNumericos.hpp"
#include "MetodoRKT.hpp"

#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <iomanip>
using std::setw;
#include <math.h>

MetodoRKT::MetodoRKT(const double _Xo, const double _Yo, const double _Xf, const double _h) : MetodosNumericos(_Xo, _Yo, _Xf, _h)
{
}

const double MetodoRKT::ResolucionNumerica() const
{
    double e = 2.71828, c1, c2, c3, c4, c5, c6, _Xf, _Xo, _f = 0.0, _Yo, _h, k1, k2, k3, k4;
    _Xo = this->getX_0();
    _Yo = this->getY_0();
    _Xf = this->getX_f();
    _h = this->get_h();
    cout << "Runge-Kutta 4to orden" << endl;
    cout << setw(10) << "X" << setw(10) << "Y" << setw(10) << "k1" << setw(5) << "c1" << setw(10) << "c2" << setw(10) << "k2" << setw(5) << "c3" << setw(10) << "c4" << setw(10) << "k3" << setw(5) << "c5" << setw(10) << "c6" << setw(10) << "k4" << endl;
    
    cout.precision(4);
    
    for (int i = _Xo; _Xo <= _Xf; _Xo += _h)
    {
        _f = _Yo - pow(_Xo ,2) +1;
        k1 = _f;
        c1 = _Xo + (_h / 2);
        c2 = _Yo + (k1 * _h / 2);
        k2 = ((-20 * c2) + (7 * (pow(e, -0.5 * c1))));
        c3 = _Xo + (_h / 2);
        c4 = _Yo + (k2 * _h / 2);
        k3 = ((-20 * c4) + (7 * (pow(e, -0.5 * c3))));
        c5 = _Xo + _h;
        c6 = _Yo + (k3 * _h);
        k4 = ((-20 * c6) + (7 * (pow(e, -0.5 * c5))));
        cout << setw(10) << _Xo << setw(10) << _Yo << setw(10) << k1 << setw(5) << c1 << setw(10) << c2 << setw(10) << k2 << setw(5) << c3 << setw(10) << c4 << setw(10) << k3 << setw(5) << c5 << setw(10) << c6 << setw(10) << k4 << endl;
        _Yo = _Yo + ((_h / 6) * (k1 + (2 * k2) + (2 * k3) + k4));
    }
    cout << endl;
    return _Yo;
}

const double MetodoRKT::ResolucionNumerica2() const
{
    double e = 2.71828, c1, c2, _Xf, _Xo, _f = 0.0, _Yo, _h, k1, k2;
    _Xo = this->getX_0();
    _Yo = this->getY_0();
    _Xf = this->getX_f();
    _h = this->get_h();
    cout << "Runge-Kutta 2do orden" << endl;
    cout << setw(10) << "X" << setw(10) << "Y" << setw(10) << "k1" << setw(10) << "c1" << setw(10) << "c2" << setw(10) << "k2" << endl;
    
    cout.precision(4);
    
    for (int i = _Xo; _Xo <= _Xf; _Xo += _h)
    {
        _f = _Yo - pow(_Xo ,2) +1;
        k1 = _f * _h;
        c1 = (_Xo + _h);
        c2 = (_Yo + k1);
        k2 = _h * ((-20 * c2) + (7 * (pow(e, -0.5 * c1))));
        cout << setw(10) << _Xo << setw(10) << _Yo << setw(10) << k1 << setw(10) << c1 << setw(10) << c2 << setw(10) << k2 << endl;
        _Yo = _Yo + (((k1 + k2) / 2));
    }
    cout << endl;
    return _Yo;
}

const double MetodoRKT::getMetodoRKT4() const
{
    return MetodoRKT::ResolucionNumerica();
}

const double MetodoRKT::getMetodoRKT2() const
{
    return MetodoRKT::ResolucionNumerica2();
}

MetodoRKT::~MetodoRKT()
{
}
