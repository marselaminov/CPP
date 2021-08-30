#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "Contact.hpp"

class Phonebook {
public:
	Phonebook();
	~Phonebook();
	Contact	contacts[8];
};

#endif