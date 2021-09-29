#include "span.hpp"

Span::Span() {}

Span::Span(unsigned int N) : size(N) {}

Span::Span(const Span &src) {
	if (src.size < src.vector.size())
		throw std::runtime_error("Copy constructor error!");
	this->vector.insert(this->vector.end(), src.vector.begin(), src.vector.end());
}

Span& Span::operator=(const Span &src) {
	if (src.size < src.vector.size())
		throw std::runtime_error("Assignation operator error!");
	this->vector.clear();
	this->vector.insert(this->vector.end(), src.vector.begin(), src.vector.end());
	return (*this);
}

int	Span::operator[](const unsigned int index) {
	return (this->vector[index]);
}

Span::~Span() {}
