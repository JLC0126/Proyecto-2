#include "MetodosNumericos.hpp"
#include "MetodoBiseccion.hpp"

#include"func_test.hpp"
#include"configs.hpp"

#include <iomanip>
using std::setw;

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <cmath>
using std::fabs;
using std::pow;

//double f(double x);

MetodoBiseccion::MetodoBiseccion(const double X_0, const double X_f) : MetodosNumericos(X_0, X_f)
{
}

const double MetodoBiseccion::get_puntoMedio() const
{
    return this->puntoMedio;
}


void MetodoBiseccion::set_puntoMedio(double pm)
{
    this->puntoMedio = pm;
}

MetodoBiseccion::~MetodoBiseccion()
{
}

const double MetodoBiseccion::Solver() const
{
    /*
    en main.cpp MetodoBiseccion Mb(xi, xf, tolerancia);
    */
    int contador = 1;
    double _Xo, _Xf, pm1, pm2, fa, fb, fpm1, fpm2, Ea;
    _Xo = this->getX_0();
    _Xf = this->getX_f();
    pm1 = this->get_puntoMedio();

    cout << "Metodo de Biseccion" << endl;
    cout << setw(5) << "n" << setw(15) << "a" << setw(10) << "b" << setw(10) << "pm" << setw(10) << "f(a)" << setw(10) << "f(b)" << setw(10) << "f(pm)" << setw(10) << "Error abs" << endl;

    cout.precision(4);

    do
    {
        pm1 = (_Xo + _Xf) / 2;
        fa = f(_Xo);
        fb = f(_Xf);
        fpm1 = f(pm1);

        cout << setw(5) << contador << setw(15) << _Xo << setw(10) << _Xf << setw(10) << pm1 << setw(10) << fa << setw(10) << fb << setw(10) << fpm1 << setw(10) << Ea << endl;

        if ((fa * fb) < 0)
        {
            _Xf = pm1;
        }
        else if ((fa * fb) > 0)
        {
            _Xo = pm1;
        }
        else if (fpm1 == 0)
        {
            cout << pm1 << endl;
        }

        pm2 = (_Xo + _Xf) / 2;
        Ea = fabs(double(_Xf - _Xo) / (_Xf));
        contador++;

    } while ((Ea > TOL) && (contador <= ITERACIONES));

    cout << setw(5) << contador << setw(15) << _Xo << setw(10) << _Xf << setw(10) << pm1 << setw(10) << fa << setw(10) << fb << setw(10) << fpm1 << setw(10) << Ea << endl;

    if (contador > ITERACIONES)
    {
        cout << "El metodo no converge en " << ITERACIONES << "iteraciones, use mas iteraciones o escoja un intervalo adecuado \n";
    }

    if (contador <= ITERACIONES)
    {
        cout << "El metodo converge a " << contador << " iteraciones " << endl;
        cout << "Raiz: ";
    }
    return pm2;
}

const double MetodoBiseccion::get_MetodoBiseccion() const
{
    return MetodoBiseccion::Solver();
}
