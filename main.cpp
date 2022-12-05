#include "MetodosNumericos.hpp"
#include "MetodoRKT.hpp"
#include "MetodoEuler.hpp"
#include "EulerMejorado.hpp"
#include "MetodoBiseccion.hpp"
#include "MetodoNewton.hpp"
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{

    int r,orden;

    double _Yo;
    double _Xo;
    double _Xf;

    cout << "   METODO A UTILIZAR \n"
         << endl;
    cout << "1. Metodo RunngeKutta" << endl;
    cout << "2. Metodo Euler " << endl;
    cout << "3. Metodo Euler Mejorado " << endl;
    cout << "4. Metodo de Biseccion " << endl;
    cout << "5. Metodo de Newton" << endl;

    cin >> r;

    switch (r)
    {
    case 1:
    {
        cout<<"Ingrese 2 si desea usar 'RK orden 2' o ingrese 4 si desea usar 'RK orden 4' "<<endl;
        cin>>orden;
        cout << "\n Ingrese el Xo inicial: "; //[0,2], y(0)=0.5, h=0.2
        cin >> _Xo;
        cout << "\n Ingrese Yo inicial: ";
        cin >> _Yo;
        cout << "\n Ingrese la Xf final: ";
        cin >> _Xf;
        cout << "\n El salto esta configurado por defecto como  0.2";
        
        cout << endl;
        MetodoRKT RK(_Xo, _Yo, _Xf,orden);
        cout << RK.getMetodoRKT() << endl;
        RK.~MetodoRKT();
    }
    break;
    case 2:
    {
        cout << "\n Ingrese el Xo inicial: "; //[0,2], y(0)=0.5, h=0.5
        cin >> _Xo;
        cout << "\n Ingrese Yo inicial: ";
        cin >> _Yo;
        cout << "\n Ingrese la Xf final: ";
        cin >> _Xf;
        cout << "\n El salto esta configurado por defecto como  0.2";
        
        cout << endl;
        MetodoEuler E(_Xo, _Yo, _Xf);
        cout << E.getMetodoEuler() << endl;
        E.~MetodoEuler();
    }
    break;
    case 3:
    {
        cout << "\n Ingrese el Xo inicial: "; //[0,2], y(0)=0.5, h=0.5
        cin >> _Xo;
        cout << "\n Ingrese Yo inicial: ";
        cin >> _Yo;
        cout << "\n Ingrese la Xf final: ";
        cin >> _Xf;
        cout << "\n El salto esta configurado por defecto como  0.2";
        
        cout << endl;
        EulerMejorado EM(_Xo, _Yo, _Xf);
        cout << EM.getEulerMejorado() << endl;
        EM.~EulerMejorado();
    }
    break;
    case 4:
    {
        cout << "\n Ingrese el limite inferior: "; //[1,2]
        cin >> _Xo;
        cout << "\n Ingrese el limite superior: ";
        cin >> _Xf;
        cout << "\n La tolerancia esta configurada por defecto como  0.01 \n  ";
        
        MetodoBiseccion Mb(_Xo, _Xf);
        cout << Mb.get_MetodoBiseccion() << endl;
        Mb.~MetodoBiseccion();
    }
    break;
    case 5:
    {
        cout << "\n Ingrese el limite inferior: "; // Po= pi/4 aprox. 0.785398
        cin >> _Xo;
        cout << "\n Ingrese el limite superior: ";
        cin >> _Xf;
        cout << "\n La tolerancia esta configurada por defecto como  0.01\n  ";
        MetodoNewton Mn(_Xo, _Xf);
        cout << Mn.get_MetodoNewton() << endl;
        Mn.~MetodoNewton();
    }
    break;
    }

    return 0;
}