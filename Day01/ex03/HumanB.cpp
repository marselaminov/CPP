# include "Weapon.hpp"
# include "HumanB.hpp"

HumanB::HumanB(std::string name)
	: _weapon(NULL), _name(name) {}

HumanB::~HumanB() {}

void 	HumanB::setWeapon(Weapon &weapon) {
	_weapon = &weapon;
}

void 	HumanB::attack() {
	if (this->_weapon == NULL)
		std::cout << _name << " is unarmed" << std::endl;
	else
		std::cout << _name << " attacks with his " << _weapon->getType() << std::endl;
}