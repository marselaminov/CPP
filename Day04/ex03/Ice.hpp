#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria {
public:
	Ice();
	Ice(Ice const &src);
	Ice & operator=(Ice const &src);
	virtual ~Ice();
	virtual Ice* clone() const;
	virtual void	use(ICharacter &target);
};

#endif