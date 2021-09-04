# include "Fixed.hpp"

Fixed::Fixed() : fixed_p(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &src) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed	&	Fixed::operator=(const Fixed &src) {
	std::cout << "Assignation operator called" << std::endl;
	this->fixed_p = src.getRawBits();
	return (*this);
}

Fixed::~Fixed() {
	std::cout << "Default constructor called" << std::endl;
}

int 	Fixed::getRawBits() const {
	std::cout << "getRawBits member function called" << std::endl;
	return (this->fixed_p);
}

void 	Fixed::setRawBits(const int raw) {
	std::cout << "setRawBits member function called" << std::endl;
	this->fixed_p = raw;
}
