#ifndef POINT_HPP
# define POINT_HPP

# include <iostream>
# include "Fixed.hpp"

class	Point {
public:
	Point();
	Point(const Point &src);
	Point(float x, float y);
	Point & operator=(Point &src) const;
	~Point();

	int 	getXRaw() const;
	int 	getYRaw() const;
	float	getXFloat() const;
	float	getYFloat() const;

private:
	Fixed const x;
	Fixed const y;
};

std::ostream&	operator<<(std::ostream &out, const Fixed &src);

#endif