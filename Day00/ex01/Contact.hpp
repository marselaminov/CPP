#ifndef  CONTACT_HPP
# define CONTACT_HPP
# include <string>
# include <iostream>

class Contact {
private:
	std::string _first_name;
	std::string _last_name;
	std::string _nickname;
	std::string _phone_number;
	std::string _darkest_secret;
public:
	Contact();
	~Contact();
	std::string getFirstName();
	std::string getLastName();
	std::string getNickname();
	std::string getPhoneNumber();
	std::string getDarkestSecret();
	void setFirstName();
	void setLastName();
	void setNickname();
	void setPhoneNumber();
	void setDarkestSecret();
};

#endif
