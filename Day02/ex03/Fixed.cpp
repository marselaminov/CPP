# include "Fixed.hpp"

Fixed::Fixed() : fixed_p(0) {
}

Fixed::Fixed(const Fixed &src) {
	*this = src;
}

Fixed::Fixed(const int src) {
    this->fixed_p = src * (1 << this->bits);
}

Fixed::Fixed(const float src) {
    this->fixed_p = roundf(src * (1 << this->bits));
}

Fixed	&	Fixed::operator=(const Fixed &src) {
	this->fixed_p = src.getRawBits();
	return (*this);
}

Fixed::~Fixed() {}

bool 	Fixed::operator>(const Fixed &src) const {
	return (this->fixed_p > src.getRawBits());
}

bool 	Fixed::operator<(const Fixed &src) const {
	return (this->fixed_p < src.getRawBits());
}

bool 	Fixed::operator>=(const Fixed &src) const {
	return (this->fixed_p >= src.getRawBits());
}

bool 	Fixed::operator<=(const Fixed &src) const {
	return (this->fixed_p <= src.getRawBits());
}

bool 	Fixed::operator==(const Fixed &src) const {
	return (this->fixed_p < src.getRawBits());
}

bool 	Fixed::operator!=(const Fixed &src) const {
	return (this->fixed_p != src.getRawBits());
}

Fixed	Fixed::operator+(const Fixed &src) {
	Fixed	tmp(this->toFloat() + src.toFloat());
	return (tmp);
}

Fixed	Fixed::operator-(const Fixed &src) {
	Fixed	tmp(this->toFloat() - src.toFloat());
	return (tmp);
}

Fixed	Fixed::operator*(const Fixed &src) {
	Fixed	tmp(this->toFloat() * src.toFloat());
	return (tmp);
}

Fixed	Fixed::operator/(const Fixed &src) {
	if (src.toFloat() == 0) {
		std::cout << "Division by zero" << std::endl;
		return (*this);
	}
	Fixed	tmp(this->toFloat() / src.toFloat());
	return (tmp);
}

Fixed&	Fixed::operator++() {
	this->fixed_p++;
	return (*this);
}

Fixed&	Fixed::operator--() {
	this->fixed_p--;
	return (*this);
}

Fixed	Fixed::operator++(int) {
	Fixed	tmp(*this);
	this->fixed_p++;
	return (tmp);
}

Fixed	Fixed::operator--(int) {
	Fixed	tmp(*this);
	this->fixed_p--;
	return (tmp);
}

Fixed &Fixed::min(Fixed &src1, Fixed &src2) {
	return (src1 < src2 ? src1 : src2);
}

Fixed &Fixed::max(Fixed &src1, Fixed &src2) {
	return (src1 > src2 ? src1 : src2);
}

const Fixed &Fixed::min(const Fixed &src1, const Fixed &src2) {
	return (src1 < src2 ? src1 : src2);
}

const Fixed &Fixed::max(const Fixed &src1, const Fixed &src2) {
	return (src1 > src2 ? src1 : src2);
}

int 	Fixed::getRawBits() const {
	return (this->fixed_p);
}

void 	Fixed::setRawBits(const int raw) {
	this->fixed_p = raw;
}

int		Fixed::toInt(void) const {
    return ((int)(this->fixed_p >> this->bits));
}


float	Fixed::toFloat(void) const {
    return ((float)this->fixed_p / (1 << this->bits));
}

std::ostream&	operator<<(std::ostream &out, const Fixed &src) {
    return (out << src.toFloat());
}