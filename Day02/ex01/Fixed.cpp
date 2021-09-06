# include "Fixed.hpp"

Fixed::Fixed() : fixed_p(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &src) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::Fixed(const int src) {
    std::cout << "Int constructor called" << std::endl;
    this->fixed_p = src * (1 << this->bits);
}

Fixed::Fixed(const float src) {
    std::cout << "Float constructor called" << std::endl;
    this->fixed_p = roundf(src * (1 << this->bits));
}

Fixed	&	Fixed::operator=(const Fixed &src) {
	std::cout << "Assignation operator called" << std::endl;
	this->fixed_p = src.getRawBits();
	return (*this);
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

int 	Fixed::getRawBits() const {
	return (this->fixed_p);
}

void 	Fixed::setRawBits(const int raw) {
	std::cout << "setRawBits member function called" << std::endl;
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