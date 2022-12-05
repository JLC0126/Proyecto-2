#ifndef _METODOBISECCION_
#define _METODOBISECCION_


#include "MetodosNumericos.hpp"

class MetodoBiseccion: public MetodosNumericos{

    friend double f(double );
    public:
        MetodoBiseccion(const double,const double);
        ~MetodoBiseccion();
        const double Solver() const;
        const double get_MetodoBiseccion() const;
        const double get_puntoMedio() const;

        void set_puntoMedio(double );

    private:
    double puntoMedio;

};

#endif