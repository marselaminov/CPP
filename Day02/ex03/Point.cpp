# include "Fixed.hpp"
# include "Point.hpp"

Point::Point() : x(0), y(0) {}

Point::Point(float x, float y) : x(x), y(y) {}

Point::~Point() {}

Point::Point(const Point &src) : x(src.x), y(src.y) {}

Point &Point::operator=(Point &src) const {
	return (src);
}

int	Point::getXRaw() const {
	return (this->x.getRawBits());
}

int	Point::getYRaw() const {
	return (this->y.getRawBits());
}

float	Point::getXFloat() const {
	return (this->x.toFloat());
}

float	Point::getYFloat() const {
	return (this->y.toFloat());
}