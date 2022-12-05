#include "MetodosNumericos.hpp"
#include "MetodoNewton.hpp"

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



MetodoNewton::~MetodoNewton()
{
}


MetodoNewton::MetodoNewton(const double X_0, const double X_f) : MetodosNumericos(X_0, X_f)
{
}

const double MetodoNewton::Solver() const
{

    double _Xo, _Xf, f1, f2, fp1, fp2, Ea;
    _Xo = this->getX_0();
    _Xf = this->getX_f();

    cout << "Metodo de Newton" << endl;
    cout << setw(5) << "n" << setw(15) << "Xi" << setw(10) << "Xi+1" << setw(10) << "Error abs" << setw(10) << "f(xi)" << setw(10) << "f'(xi)" << endl;

    cout.precision(4);

    for (int contador = 1; contador <= ITERACIONES; contador++)
    {
        f1 = g(_Xo);
        fp1 = g_prima(_Xo);

        if (fp1 == 0)
        {
            cout << "Hay division entre 0!" << endl;
            break;
        }

        _Xf = _Xo - (f1 / fp1);
        Ea = fabs((_Xf - _Xo) / _Xf);

        cout << setw(5) << contador << setw(15) << _Xo << setw(10) << _Xf << setw(10) << Ea << setw(10) << f1 << setw(10) << fp1 << endl;
        _Xo = _Xf;
        if (Ea < TOL)
        {
            cout << "El metodo converge en " << contador << " iteraciones" << endl;
            cout << "Raiz :\n";
            break;
        }
    }

    if (Ea > TOL)
    {
        cout << "El metodo no converge, se necesitan mas iteraciones" << endl;
    }

    return _Xf;
}

const double MetodoNewton::get_MetodoNewton() const
{
    return MetodoNewton::Solver();
}