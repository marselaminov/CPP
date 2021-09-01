#include "Contact.hpp"

Contact::Contact() {}

Contact::~Contact() {}

std::string	Contact::getFirstName() {
	return _first_name;
}

std::string	Contact::getLastName() {
	return _last_name;
}

std::string	Contact::getNickname() {
	return _nickname;
}

std::string	Contact::getPhoneNumber() {
	return _phone_number;
}

std::string	Contact::getDarkestSecret() {
	return _darkest_secret;
}

void Contact::setFirstName() {
	std::string	str;

	std::cout << "First name : ";
	if (!std::getline(std::cin, str))
		exit(0);
	while (str.size() <= 0)
	{
		std::cout << "Please enter first name : ";
		if (!std::getline(std::cin, str))
			exit(0);
	}
	_first_name = str;
}

void Contact::setLastName() {
	std::string	str;

	std::cout << "Last name : ";
	if (!std::getline(std::cin, str))
		exit(0);
	while (str.size() <= 0)
	{
		std::cout << "Please enter last name : ";
		if (!std::getline(std::cin, str))
			exit(0);
	}
	_last_name = str;
}

void Contact::setNickname() {
	std::string	str;

	std::cout << "Nickname : ";
	if (!std::getline(std::cin, str))
		exit(0);
	while (str.size() <= 0)
	{
		std::cout << "Please enter nickname : ";
		if (!std::getline(std::cin, str))
			exit(0);
	}
	_nickname = str;
}

void Contact::setPhoneNumber() {
	std::string	str;

	std::cout << "Phone number : ";
	if (!std::getline(std::cin, str))
		exit(0);
	while (str.size() <= 0)
	{
		std::cout << "Please enter phone number : ";
		if (!std::getline(std::cin, str))
			exit(0);
	}
	_phone_number = str;
}

void Contact::setDarkestSecret() {
	std::string	str;

	std::cout << "Darkest secret : ";
	if (!std::getline(std::cin, str))
		exit(0);
	while (str.size() <= 0)
	{
		std::cout << "What about darkest secret? You should write about that : ";
		if (!std::getline(std::cin, str))
			exit(0);
	}
	_darkest_secret = str;
}
