#include "Point.hpp"
#include <cmath>
#include <cstdlib>

static float area(Point const &p1, Point const &p2, Point const &p3)
{
    float result = fabs(
        (p1.getX().toFloat() * (p2.getY().toFloat() - p3.getY().toFloat()) +
         p2.getX().toFloat() * (p3.getY().toFloat() - p1.getY().toFloat()) +
         p3.getX().toFloat() * (p1.getY().toFloat() - p2.getY().toFloat())) / 2.0f
    );
    return result;
}
bool bsp(Point const a, Point const b, Point const c, Point const point)
{
    float areaABC = area(a, b, c);
    float areaPAB = area(point, a, b);
    float areaPBC = area(point, b, c);
    float areaPCA = area(point, c, a);

    // Si el punto está exactamente en un borde, algunos ejercicios lo consideran "fuera".
    if (areaPAB == 0 || areaPBC == 0 || areaPCA == 0)
        return false;

    // Comparar áreas (permitiendo un pequeño margen de error por floats)
    return fabs((areaPAB + areaPBC + areaPCA) - areaABC) < 0.0001;
}
