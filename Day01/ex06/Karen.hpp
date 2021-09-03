#ifndef KAREN_HPP
# define KAREN_HPP

# include <iostream>
# include <string>

class Karen {
private:
	void	debug();
	void	info();
	void	warning();
	void	error();
public:
	Karen();
	void	complain(std::string level);
	~Karen();
};

typedef void (Karen::*ptr_to_func)(void);

#endif