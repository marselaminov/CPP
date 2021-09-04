#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed {
public:
	Fixed();
	Fixed(Fixed const & src);
	Fixed & operator=(Fixed const & src);
	~Fixed();

	int		getRawBits() const;
	void	setRawBits(int const raw);

private:
	static const int	bits = 8;
	int					fixed_p;
};

#endif