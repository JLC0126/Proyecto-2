#ifndef _METODOSNUMERICOS_
#define _METODOSNUMERICOS_

class MetodosNumericos // Clase base abstracta
{
public:
	MetodosNumericos(double, double, double);//constructor para solucion de EDO's
	MetodosNumericos(double, double);//constructor para raices de polinomios

	double getX_0() const;

	double getY_0() const;

	double getX_f() const;

	double get_h() const;

	virtual const double Solver() const = 0; // funcion virtual pura


private:
	double x_0, y_0, x_f;
	double *Soluciones;
};
#endif