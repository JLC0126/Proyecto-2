#include "MetodosNumericos.hpp"
#include "EulerMejorado.hpp"
#include"configs.hpp"
#include"func_test.hpp"
#include <iostream>
using std::cout;
using std::endl;
#include <iomanip>
using std::setw;
#include <math.h>

EulerMejorado::EulerMejorado(const double _Xo, const double _Yo, const double _Xf) : MetodosNumericos(_Xo, _Yo, _Xf)
{
}

const double EulerMejorado::Solver() const
{
    double  _Xf, _Xo, _f = 0.0, _Yo, c1, c2, k1;
	_Xo = this->getX_0();
	_Yo = this->getY_0();
	_Xf = this->getX_f();

	cout << "Euler Mejorado" << endl;
	cout << setw(15) << "X" << setw(15) << "Y" << setw(15) << "c2" << setw(15) << "c1" << setw(15) << "k1" << endl;
	for (int i = _Xo; _Xo <= _Xf; _Xo += H)
	{
		_f = h(_Xo,_Yo);
		c1 = _Xo + H;
		c2 = _Yo + (H * _f);
		k1 = 2 * c1 * c2;
		cout << setw(15) << _Xo << setw(15) << _Yo << setw(15) << c2 << setw(15) << c1 << setw(15) << k1 << endl;
		_Yo = _Yo + H / 2 * (_f + k1);
	}
	return _Yo;
}

const double EulerMejorado::getEulerMejorado() const
{
	return EulerMejorado::Solver();
}

EulerMejorado::~EulerMejorado()
{
}