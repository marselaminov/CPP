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
	std::getline(std::cin, str);
	while (str.size() <= 0)
	{
		std::cout << "Enter data";
		std::getline(std::cin, str);
	}
	_first_name = str;
}

void Contact::setLastName() {
	std::string	str;

	std::cout << "Last name : ";
	std::getline(std::cin, str);
	while (str.size() <= 0)
	{
		std::cout << "Enter data";
		std::getline(std::cin, str);
	}
	_last_name = str;
}

void Contact::setNickname() {
	std::string	str;

	std::cout << "Nickname : ";
	std::getline(std::cin, str);
	while (str.size() <= 0)
	{
		std::cout << "Enter data";
		std::getline(std::cin, str);
	}
	_nickname = str;
}

void Contact::setPhoneNumber() {
	std::string	str;

	std::cout << "Phone number : ";
	std::getline(std::cin, str);
	while (str.size() <= 0)
	{
		std::cout << "Enter data";
		std::getline(std::cin, str);
	}
	_phone_number = str;
}

void Contact::setDarkestSecret() {
	std::string	str;

	std::cout << "Darkest secret : ";
	std::getline(std::cin, str);
	while (str.size() <= 0)
	{
		std::cout << "Enter data";
		std::getline(std::cin, str);
	}
	_darkest_secret = str;
}