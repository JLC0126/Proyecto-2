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
    cout << setw(15) << "X" << setw(15) << "Y" << setw(15) << "k1" << setw(15) << "c1" << setw(15) << "c2" << setw(15) << "k2" << setw(15) << "c3" << setw(15) << "c4" << setw(15) << "k3" << setw(15) << "c5" << setw(15) << "c6" << setw(15) << "k4" << endl;
    for (int i = _Xo; _Xo <= _Xf; _Xo += _h)
    {
        _f = (-20 * _Yo) + (7 * (pow(e, -0.5 * _Xo)));
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
        cout << setw(15) << _Xo << setw(15) << _Yo << setw(15) << k1 << setw(15) << c1 << setw(15) << c2 << setw(15) << k2 << setw(15) << c3 << setw(15) << c4 << setw(15) << k3 << setw(15) << c5 << setw(15) << c6 << setw(15) << k4 << endl;
        _Yo = _Yo + ((_h / 6) * (k1 + (2 * k2) + (2 * k3) + k4));
    }
    cout << endl;
}

const double MetodoRKT::getMetodoRKT4() const
{
    return MetodoRKT::ResolucionNumerica();
}

MetodoRKT::~MetodoRKT()
{
}
