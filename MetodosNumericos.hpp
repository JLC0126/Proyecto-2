#ifndef _METODOSNUMERICOS_
#define _METODOSNUMERICOS_

class MetodosNumericos
{
public:
	MetodosNumericos(double, double, double, double);

	double getX_0() const;

	double getY_0() const;

	double getX_f() const;

	double get_h() const;

private:
	double x_0, y_0, x_f, h;
};
#endif