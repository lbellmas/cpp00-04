#include "Fixed.hpp"

class   Point
{
    private:
        const Fixed x;
        const Fixed y;
    public:
        Point(): x(0), y(0){}
        Point(const float xx, const float yy);
        Point(Point &point);
        Point(const Point &point);
        ~Point();
        Point &operator=(const Point &copy);
        Fixed   getX() const;
        Fixed   getY() const;
};

bool    bsp( Point const a, Point const b, Point const c, Point const point);