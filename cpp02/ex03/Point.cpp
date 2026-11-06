#include "Point.hpp"

Point::~Point()
{}

Point::Point(const float xx, const float yy) : x(xx), y(yy)
{}

Point::Point(Point &point): x(point.x.toFloat()), y(point.y.toFloat())
{}

Point::Point(const Point &point): x(point.x.toFloat()), y(point.y.toFloat())
{}

Fixed   Point::getX() const
{
    return (x);
}

Fixed   Point::getY() const
{
    return (y);
}

Point &Point::operator=(const Point &copy)
{
    (void)copy;
    return (*this);
}