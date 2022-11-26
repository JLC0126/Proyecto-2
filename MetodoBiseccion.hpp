#ifndef _METODOBISECCION_
#define _METODOBISECCION_


#include "MetodosNumericos.hpp"

class MetodoBiseccion: public MetodosNumericos{

    public:
        MetodoBiseccion(const double,const double, const double);
        ~MetodoBiseccion();
        const double ResolucionNumerica() const;
        const double get_MetodoBiseccion() const;
        const double get_puntoMedio() const;
        const double get_tolerancia() const;

        void set_puntoMedio(double );

    private:
    double tolerancia, puntoMedio;

};

#endif