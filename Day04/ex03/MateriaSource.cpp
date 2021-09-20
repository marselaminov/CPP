#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : saved(0) {
	for (int i = 0; i < 4; ++i)
		this->srcs[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &src) {
	for (int i = 0; i < 4; ++i) {
		if (src.srcs[i])
			this->srcs[i] = this->srcs[i]->clone();
		else
			this->srcs[i] = NULL;
	}
}

MateriaSource & MateriaSource::operator=(const MateriaSource &src) {
	if (this == &src)
		return (*this);
	this->saved = src.saved;
	for (int i = 0; i < 4; ++i)
		delete this->srcs[i];
	for (int i = 0; i < 4; ++i) {
		if (src.srcs[i])
			this->srcs[i] = this->srcs[i]->clone();
		else
			this->srcs[i] = NULL;
	}
	return (*this);
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < 4; ++i)
		delete this->srcs[i];
}

void	MateriaSource::learnMateria(AMateria *m) {
	if (this->saved == 4 || m == NULL)
		return;
	this->srcs[this->saved] = m;
	++this->saved;
}

AMateria * MateriaSource::createMateria(const std::string &type) {
	for (int i = 0; i < 4; ++i) {
		if (type == this->srcs[i]->getType())
			return (this->srcs[i]->clone());
	}
	return (0);
}