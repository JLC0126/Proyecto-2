#include "MetodosNumericos.hpp"
#include "MetodoRuKu.hpp"

#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <iomanip>
using std::setw;
#include <math.h>

MetodoRuKu::MetodoRuKu(const double _Xo, const double _Yo, const double _Xf, const double _h) : MetodosNumericos(_Xo, _Yo, _Xf, _h)
{
}

const double MetodoRuKu::MetodoRuKu2()const{
 	    double e=2.71828, c1, c2, _Xf, _Xo, _f=0.0, _Yo, _h, k1, k2;		
 		_Xo=this->getX_0();
 		_Yo=this->getY_0();
		_Xf=this->getX_f();
 		_h=this->get_h();
         cout <<"Runge-Kutta 2do orden" <<endl;
                  cout<<setw(15)<<"X"<<setw(15)<<"Y"<<setw(16)<<"k1"<<setw(16)<<"c1"<<setw(16)<<"c2"<<setw(16)<<"k2"<<endl;
              for(int i=_Xo; _Xo<=_Xf; _Xo+=_h){
                  _f=(-20*_Yo)+(7*(pow(e,-0.5*_Xo)));
                  k1=_f*_h;
                 c1=(_Xo+_h);
                  c2=(_Yo+k1);
                  k2=_h*((-20*c2)+(7*(pow(e,-0.5*c1))));
                  cout<<setw(16)<<_Xo<<setw(16)<<_Yo<<setw(16)<<k1<<setw(16)<<c1<<setw(16)<<c2<<setw(16)<<k2<<endl;
                  _Yo=_Yo+(((k1+k2)/2)); 
     }
       cout <<endl;
}

const double MetodoRuKu::getMetodoRuKu2()const{
 return MetodoRuKu::MetodoRuKu2();
}

