#include "MetodosNumericos.hpp"
#include "MetodoEuler.hpp"
#include <iostream>
using std::cout;
using std::endl;
#include <iomanip>
using std::setw;
#include <math.h>

MetodoEuler::MetodoEuler(const double _Xo, const double _Yo, const double _Xf, const double _h) : MetodosNumericos(_Xo, _Yo, _Xf, _h)
{
}

const double MetodoEuler::ResolucionNumerica() const
{
	double e = 2.71828, _Xf, _Xo, _f = 0.0, _Yo, _h;
	_Xo = this->getX_0();
	_Yo = this->getY_0();
	_Xf = this->getX_f();
	_h = this->get_h();
	cout << "Euler" << endl;
	cout << setw(15) << "X" << setw(15) << "Y" << setw(15) << "f(x)" << endl;
	
	cout.precision(4);

	for (int i = _Xo; _Xo <= _Xf; _Xo += _h)
	{
		_f = _Yo - pow(_Xo ,2) +1;
		cout << setw(15) << _Xo << setw(15) << _Yo << setw(15) << _f << endl;
		_Yo = _Yo + _h * _f;
	}
	return _Yo;
}

const double MetodoEuler::ResolucionNumerica2() const
{

	double e = 2.71828, _Xf, _Xo, _f = 0.0, _Yo, _h, c1, c2, k1;
	_Xo = this->getX_0();
	_Yo = this->getY_0();
	_Xf = this->getX_f();
	_h = this->get_h();
	cout << "Euler Mejorado" << endl;
	cout << setw(15) << "X" << setw(15) << "Y" << setw(15) << "c2" << setw(15) << "c1" << setw(15) << "k1" << endl;
	for (int i = _Xo; _Xo <= _Xf; _Xo += _h)
	{
		_f = _Yo - pow(_Xo ,2) +1;
		c1 = _Xo + _h;
		c2 = _Yo + (_h * _f);
		k1 = 2 * c1 * c2;
		cout << setw(15) << _Xo << setw(15) << _Yo << setw(15) << c2 << setw(15) << c1 << setw(15) << k1 << endl;
		_Yo = _Yo + _h / 2 * (_f + k1);
	}
	return _Yo;
}

const double MetodoEuler::getMetodoEuler() const
{
	return MetodoEuler::ResolucionNumerica();
}

const double MetodoEuler::getMetodoEulerMejorado() const
{
	return MetodoEuler::ResolucionNumerica2();
}

MetodoEuler::~MetodoEuler()
{
}