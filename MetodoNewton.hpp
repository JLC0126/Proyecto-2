#ifndef _METODONEWTON_
#define _METODONEWTON_

#include"MetodosNumericos.hpp"

class MetodoNewton: public MetodosNumericos{


    friend double funcion(double );
    friend double fprima(double );
    public:
        MetodoNewton(const double,const double, const double);
        ~MetodoNewton();
        const double ResolucionNumerica() const;
        const double get_MetodoNewton() const;
        const double get_tolerancia() const;

    private:
        double tolerancia;
};



#endif