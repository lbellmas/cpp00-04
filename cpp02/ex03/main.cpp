#include "Point.hpp"

int main( void )
{
    if (bsp(Point(0, 0), Point(5, 0), Point(0, 5), Point(1, 1)) == true)
        std::cout << "Point is inside the triangle." << std::endl;
    else
        std::cout << "Point is outside the triangle." << std::endl;
    if (bsp(Point(0, 0), Point(5, 0), Point(0, 5), Point(-1, 1)) == true)
        std::cout << "Point is inside the triangle." << std::endl;
    else
        std::cout << "Point is outside the triangle." << std::endl;
    return 0;
}
