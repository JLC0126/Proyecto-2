#include "MetodosNumericos.hpp"
#include "MetodoEuler.hpp"
#include"configs.hpp"
#include"func_test.hpp"
#include <iostream>
using std::cout;
using std::endl;
#include <iomanip>
using std::setw;
#include <math.h>

MetodoEuler::MetodoEuler(const double _Xo, const double _Yo, const double _Xf) : MetodosNumericos(_Xo, _Yo, _Xf)
{
}

const double MetodoEuler::Solver() const
{
	double  _Xf, _Xo, _f = 0.0, _Yo;
	_Xo = this->getX_0();
	_Yo = this->getY_0();
	_Xf = this->getX_f();
	cout << "Euler" << endl;
	cout << setw(15) << "X" << setw(15) << "Y" << setw(15) << "f(x)" << endl;

	cout.precision(4);

	for (int i = _Xo; _Xo <= _Xf; _Xo += H)
	{
		_f = h(_Xo,_Yo);
		cout << setw(15) << _Xo << setw(15) << _Yo << setw(15) << _f << endl;
		_Yo = _Yo + H * _f;
	}
	return _Yo;
}

const double MetodoEuler::getMetodoEuler() const
{
	return MetodoEuler::Solver();
}

MetodoEuler::~MetodoEuler()
{
}