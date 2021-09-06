#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed {
public:
	Fixed();
	Fixed(Fixed const & src);
    Fixed(const int src);
    Fixed(const float src);
	Fixed & operator=(Fixed const & src);
	~Fixed();

	int		getRawBits() const;
	void	setRawBits(int const raw);
    float	toFloat(void) const;
    int		toInt(void) const;

private:
    int					fixed_p;
    static const int	bits = 8;
};

std::ostream&	operator<<(std::ostream &out, const Fixed &src);

#endif