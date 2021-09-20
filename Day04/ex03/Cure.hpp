#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria {
public:
	Cure();
	Cure(Cure const &src);
	Cure & operator=(Cure const &src);
	virtual ~Cure();
	virtual Cure* clone() const;
	virtual void	use(ICharacter &target);
};

#endif