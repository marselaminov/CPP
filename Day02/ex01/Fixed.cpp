# include "Fixed.hpp"

/* Multiply the float by 2^(number of fractional bits for the type), eg. 2^8 for 24.8
Round the result (just add 0.5) if necessary, and floor it (or cast to an integer type) leaving an integer value.
Assign this value into the fixed-point type. */

//shifting by one bit is like dividing the number by 2, shifiting to the left is like multipling it for two

Fixed::Fixed() : fixed_p(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &src) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::Fixed(const int src) {
    std::cout << "Int constructor called" << std::endl;
    this->fixed_p = src * (1 << this->bits); // (src * (1 * 2^8)
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
    return ((int)this->fixed_p / (1 << this->bits));
}


float	Fixed::toFloat(void) const {
    return ((float)this->fixed_p / (1 << this->bits));
}

std::ostream & operator<<(std::ostream & out, Fixed const & src) {
    return (out << src.toFloat());
}