#include "MetodosNumericos.hpp"
#include "MetodoRKT.hpp"
#include "MetodoEuler.hpp"
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    int r;

    double _Yo;
    double _Xo;
    double _Xf;
    double _h;

    cout << "Ingrese el Xo inicial: ";
    cin >> _Xo;
    cout << "Ingrese Yo inicial: ";
    cin >> _Yo;
    cout << "Ingrese la Xf final: ";
    cin >> _Xf;
    cout << "Ingrese el salto(Entre mas pequenio el valor mejor): ";
    cin >> _h;

    cout << endl;
    cout << "   METODO A RESOLVER = " << endl;
    cout << "1. RunngeKutta RK4 " << endl;
    cout << "2. Euler " << endl;
    cout << "3. Euler Mejorado " << endl;
    
    cin >> r;

    MetodoRKT RK(_Xo, _Yo, _Xf, _h);
    MetodoEuler E(_Xo, _Yo, _Xf, _h);


    switch (r)
    {
    case 1:
        cout << RK.getMetodoRKT4() << endl;
        break;
    case 2:
        cout << E.getMetodoEuler() << endl;
        break;
    case 3:
        cout << E.getMetodoEulerMejorado() << endl;
        break;
    }

    return 0;
}