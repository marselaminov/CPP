#include <iostream>
#include <iomanip>
#include "Contact.hpp"
#include "Phonebook.hpp"

void 	ft_add_cont(Contact *contact, int num) {
	if (num >= 8)
		std::cout << BLUE"The phonebook is full! Now the oldest contact is override of new contact"RESET << std::endl;
	contact->setFirstName();
	contact->setLastName();
	contact->setNickname();
	contact->setPhoneNumber();
	contact->setDarkestSecret();
	if (num < 8)
		std::cout << BLUE"You add a new contact, now your digit of contacts is : "RESET << (num + 1) << std::endl;
	else
		std::cout << BLUE"You add a new contact, now your digit of contacts is : 8"RESET << std::endl;
}

void 	ft_print_table(std::string str) {
	if (str.length() > 9)
		std::cout << str.substr(0, 9) << ".|";
	else
		std::cout << std::setw(10) << str << "|";
}

void 	ft_show_current_info(Contact *contact, int num) {
	std::cout << YELLOW"              YOUR CONTACT LIST              "RESET << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	for (int i = 0; i < num; i++) {
		std::cout << "|         " << i << "|";
		ft_print_table(contact[i].getFirstName());
		ft_print_table(contact[i].getLastName());
		ft_print_table(contact[i].getNickname());
		std::cout << std::endl << "---------------------------------------------" << std::endl;
	}
}

void 	ft_get_contact_info(Contact *contact, int i) {
	std::cout << YELLOW"Contact information"RESET << std::endl;
	std::cout << "Index : " << i << std::endl;
	std::cout << "First name : " << contact[i].getFirstName() << std::endl;
	std::cout << "Last name : " << contact[i].getLastName() << std::endl;
	std::cout << "Nickname : " << contact[i].getNickname() << std::endl;
	std::cout << "Phone number : " << contact[i].getPhoneNumber() << std::endl;
	std::cout << "Darkest secret : " << contact[i].getDarkestSecret() << std::endl;
}

void	ft_search_contact(Contact *contact, int num) {
	if (num == 0) {
		std::cout << MAGENTA"In this moment you haven't any contacts"RESET << std::endl;
		return;
	}
	if (num > 8)
		num = 8;
	ft_show_current_info(contact, num);
	std::cout << YELLOW"Now you can find contact information by index"RESET << std::endl;
	std::string	index;
	std::cout << CYAN"Enter index : "RESET;
	if (!std::getline(std::cin, index))
	{
		std::cout << GREEN"You can use our phonebook when you want, thanks!"RESET << std::endl;
		exit(0);
	}
	while ((index[0] - 48) < 0 || (index[0] - 48) > 7 || (index[0] - 48) >= num || index.size() > 1) {

		std::cout << RED"You should enter a valid index"RESET << std::endl;
		std::cout << CYAN"Wrong index, try again : "RESET;
		if (!std::getline(std::cin, index))
		{
			std::cout << GREEN"You can use our phonebook when you want, thanks!"RESET << std::endl;
			exit(0);
		}
	}
	if (index.size() < 1)
		std::cout << BLUE"Back to menu"RESET << std::endl;
	else
		ft_get_contact_info(contact, index[0] - 48);
}

void	ft_routine() {
	Phonebook	phonebook = Phonebook();
	std::string	com;
	int 		num_of_cont = 0;

	std::cout << CYAN"Enter command : "RESET;
	if (!std::getline(std::cin, com))
	{
		std::cout << GREEN"You can use our phonebook when you want, thanks!"RESET << std::endl;
		exit(0);
	}
	while (com != "EXIT") {
		if (com == "ADD") {
			int	index = num_of_cont % 8;
			ft_add_cont(&phonebook.contact[index], num_of_cont);
			num_of_cont++;
		}
		else if (com == "SEARCH") {
			ft_search_contact(phonebook.contact, num_of_cont);
		}
		std::cout << CYAN"Enter command : "RESET;
		if (!std::getline(std::cin, com))
		{
			std::cout << GREEN"You can use our phonebook when you want, thanks!"RESET << std::endl;
			exit(0);
		}
	}
}

int main(int argc, char *argv[]) {
	if (argc != 1) {
		std::cout << RED"Incorrect number of arguments"RESET << std::endl;
		return (1);
	}
	argv++;
	std::cout << GREEN"Welcome to the Phonebook. You have 3 command : ADD/SEARCH/EXIT. Please enter one of this commands"RESET << std::endl;
	ft_routine();
	std::cout << GREEN"You can use our phonebook when you want, thanks!"RESET << std::endl;
	return (0);
}