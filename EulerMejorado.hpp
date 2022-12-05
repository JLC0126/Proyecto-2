#ifndef _EULERMEJORADO_
#define _EULERMEJORADO_

#include "MetodosNumericos.hpp"

class EulerMejorado : public MetodosNumericos
{
public:
	EulerMejorado(const double, const double, const double);
	~EulerMejorado();

	const double Solver() const;

	const double getEulerMejorado() const;
};
#endif