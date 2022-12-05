#include <cmath>
using std::pow;

double f(double);
double f_prima(double);
double g(double);
double g_prima(double);

// Polinomios y derivadas respectivas
double f(double x){
    return pow(x, 3) + 4 * pow(x, 2) - 10;
}

double f_prima(double x){
    return 3 * pow(x, 2) + 8 * x;
}

double g(double x){
    return cos(x) - x;
}

double g_prima(double x){
    return -1 * sin(x) - 1;
}

/*----------------------------------------------------------------------------------------------*/

double h(double, double);
double p(double , double );

// EDO's de primer orden
double h(double x, double y){
    return y - pow(x, 2) + 1;
}

double p(double x, double y)
{
    return y-pow(x,2)+1;
}