#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed {
public:
	Fixed();
	Fixed(const Fixed &src);
    Fixed(const int src);
    Fixed(const float src);
	Fixed & operator=(Fixed const & src);
	~Fixed();

	bool 	operator>(const Fixed &src) const;
	bool 	operator<(const Fixed &src) const;
	bool 	operator>=(const Fixed &src) const;
	bool 	operator<=(const Fixed &src) const;
	bool 	operator==(const Fixed &src) const;
	bool 	operator!=(const Fixed &src) const;

	Fixed	operator+(const Fixed &src);
	Fixed	operator-(const Fixed &src);
	Fixed	operator*(const Fixed &src);
	Fixed	operator/(const Fixed &src);

	Fixed&	operator++(); //prefix
	Fixed&	operator--(); //prefix

	Fixed	operator++(int); //postfix
	Fixed	operator--(int); //postfix

	static	Fixed &min(Fixed &src1, Fixed &src2);
	static	Fixed &max(Fixed &src1, Fixed &src2);
	static const	Fixed &min(const Fixed &src1, const Fixed &src2);
	static const	Fixed &max(const Fixed &src1, const Fixed &src2);

	int		getRawBits() const;
	void	setRawBits(int const raw);
	int		toInt(void) const;
	float	toFloat(void) const;


private:
    int					fixed_p;
    static const int	bits = 8;
};

std::ostream&	operator<<(std::ostream &out, const Fixed &src);

#endif