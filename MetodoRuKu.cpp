#include "MetodosNumericos.hpp"
#include "MetodoRuKu.hpp"

#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <iomanip>
using std::setw;
#include <math.h>

MetodoRuKu::MetodoRuKu(const double _Xo, const double _Yo, const double _Xf, const double _h) : MetodosNumericos(_Xo, _Yo, _Xf, _h)
{
}

double MetodoRuKu::MetodoRuKu1()
{
    double _Xo, _Yo, _Xf, _h, e = 2.71828, _f = 0.0, k1 = 0.0;
    _Xo = this->getX_0();
    _Yo = this->getY_0();
    _Xf = this->getX_f();
    _h = this->get_h();
    cout << "Runge-Kutta 1er orden" << endl;
    cout << setw(15) << "X" << setw(15) << "Y" << setw(15) << "k1" << endl;
    for (int i = _Xo; _Xo <= _Xf; _Xo += _h)
    {
        _f = (-20 * _Yo) + (7 * (pow(e, -0.5 * _Xo))); // Funcion amiga para declara la función
        k1 = _f * _h;
        cout << setw(15) << _Xo << setw(15) << _Yo << setw(15) << k1 << endl;
        _Yo = _Yo + k1;
    }
    cout << endl;
    return 0;
}

double MetodoRuKu::getMetodoRuKu1()
{
    return MetodoRuKu1();
}
