#include "MetodosNumericos.hpp"
#include "MetodoRKT.hpp"
#include "MetodoEuler.hpp"
#include"MetodoBiseccion.hpp"
#include"MetodoNewton.hpp"
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
    double tol;

    cout << "   METODO A UTILIZAR = " << endl;
    cout << "1. Metodo RunngeKutta RK4 " << endl;
    cout << "2. Metodo Euler " << endl;
    cout << "3. Metodo Euler Mejorado " << endl;
    cout << "4. Metodo de Biseccion " << endl;
    cout << "5. Metodo de Newton";
    
    cin >> r;


    switch(r)
    {
    case 1:
        {cout << "\n Ingrese el Xo inicial: ";
        cin >> _Xo;
        cout << "\n Ingrese Yo inicial: ";
        cin >> _Yo;
        cout << "\n Ingrese la Xf final: ";
        cin >> _Xf;
        cout << "\n Ingrese el salto(Entre mas pequenio el valor mejor): ";
        cin >> _h;
        cout<<endl;
        MetodoRKT RK(_Xo, _Yo, _Xf, _h);
        cout << RK.getMetodoRKT4() << endl;
        RK.~MetodoRKT();}
        break;
    case 2:
        {cout << "\n Ingrese el Xo inicial: ";
        cin >> _Xo;
        cout << "\n Ingrese Yo inicial: ";
        cin >> _Yo;
        cout << "\n Ingrese la Xf final: ";
        cin >> _Xf;
        cout << "\n Ingrese el salto(Entre mas pequenio el valor mejor): ";
        cin >> _h;
        cout<<endl;
        MetodoEuler E(_Xo, _Yo, _Xf, _h);
        cout << E.getMetodoEuler() << endl;
        E.~MetodoEuler();}
        break;
    case 3:
        {cout << "\n Ingrese el Xo inicial: ";
        cin >> _Xo;
        cout << "\n Ingrese Yo inicial: ";
        cin >> _Yo;
        cout << "\n Ingrese la Xf final: ";
        cin >> _Xf;
        cout << "\n Ingrese el salto(Entre mas pequenio el valor mejor): ";
        cin >> _h;
        cout<<endl;
        MetodoEuler E(_Xo, _Yo, _Xf, _h);
        cout << E.getMetodoEulerMejorado() << endl;
        E.~MetodoEuler();}
        break;
    case 4:
        {cout << "\n Ingrese el limite inferior: ";
        cin >> _Xo;
        cout << "\n Ingrese el limite superior: ";
        cin >> _Xf;
        cout << "\n Ingrese la tolerancia,  por ejemplo 0.001:  ";
        cin >> tol;
        MetodoBiseccion Mb(_Xo,_Yo,tol);
        cout<<Mb.get_MetodoBiseccion()<<endl;
        Mb.~MetodoBiseccion();}
        break;
    case 5:
        {cout << "\n Ingrese el limite inferior: ";
        cin >> _Xo;
        cout << "\n Ingrese el limite superior: ";
        cin >> _Xf;
        cout << "\n Ingrese la tolerancia,  por ejemplo 0.001:  ";
        cin >> tol;
        MetodoNewton Mn(_Xo,_Yo,tol);
        cout<<Mn.get_MetodoNewton()<<endl;
        Mn.~MetodoNewton();}
        break;

    }

    
    return 0;
}