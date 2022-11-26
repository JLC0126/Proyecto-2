#ifndef _METODOSNUMERICOS_
#define _METODOSNUMERICOS_

class MetodosNumericos // Clase base abstracta
{
public:
	MetodosNumericos(double, double, double, double);//constructor para solucion de EDO's
	MetodosNumericos(double, double);//constructor para raices de polinomios

	double getX_0() const;

	double getY_0() const;

	double getX_f() const;

	double get_h() const;

	virtual const double ResolucionNumerica() const = 0; // funcion virtual pura

	virtual const double ResolucionNumerica2() const;

private:
	double x_0, y_0, x_f, h;
};
#endif