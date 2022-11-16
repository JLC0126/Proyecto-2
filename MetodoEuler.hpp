#ifndef _METODOEULER_
#define _METODOEULER_

#include "MetodosNumericos.hpp"
class MetodoEuler:public MetodosNumericos{
	public:
		MetodoEuler(const double, const double, const double, const double);
		~MetodoEuler();

		const double MetodoEulerr()const;

		const double getMetodoEuler()const;
		
};
#endif
