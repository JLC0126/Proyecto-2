#ifndef _METODOEULER_
#define _METODOEULER_

#include "MetodosNumericos.hpp"

class MetodoEuler : public MetodosNumericos
{
public:
	MetodoEuler(const double, const double, const double, const double);
	~MetodoEuler();

	const double ResolucionNUmerica() const;

	const double ResolucionNumerica2() const;

	const double getMetodoEuler() const;

	const double getMetodoEulerMejorado() const;
};
#endif
