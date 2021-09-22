#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
public:
	Form();
	Form(std::string name, int grade2sign, int grade2exec);
	Form(Form const &src);
	Form & operator=(Form const &src);
	virtual ~Form();

	class GradeTooHighException : public std::exception {
	public:
		virtual const char* what() const throw();
	};
	class GradeTooLowException : public std::exception {
	public:
		virtual const char* what() const throw();
	};

	std::string	getName() const;
	int	getGrade2Signed() const;
	int	getGrade2Exec() const;
	bool	getSigned() const;

	void	beSigned(Bureaucrat &bureaucrat);

private:
	const std::string name;
	const int grade2sign;
	const int grade2exec;
	bool	sign;
};

std::ostream&	operator<<(std::ostream &out, const Form &src);

#endif