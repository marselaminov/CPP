#include "span.hpp"

Span::Span() {}

Span::Span(unsigned int N) : size(N) {}

Span::Span(const Span &src) {
	if (src.size < src.vector.size())
		throw std::runtime_error(RED"Copy constructor error!"RESET);
	this->vector.insert(this->vector.end(), src.vector.begin(), src.vector.end());
}

Span& Span::operator=(const Span &src) {
	if (src.size < src.vector.size())
		throw std::runtime_error(RED"Assignation operator error!"RESET);
	this->vector.clear();
	this->vector.insert(this->vector.end(), src.vector.begin(), src.vector.end());
	return (*this);
}

int	Span::operator[](const unsigned int index) {
	return (this->vector[index]);
}

Span::~Span() {}

void	Span::addNumber(int n) {
	unsigned int vector_size = this->vector.size();
	if (vector_size >= this->size)
		throw std::runtime_error(RED"No more space!"RESET);
	this->vector.push_back(n);
}

void	Span::addNumber(std::vector<int>::iterator &begin, std::vector<int>::iterator &end) {
	unsigned int vector_size = this->vector.size();
	if (vector_size + (end - begin) > this->size)
		throw std::runtime_error(RED"No more space!"RESET);
	this->vector.insert(this->vector.end(), begin, end);
}

unsigned int	Span::shortestSpan() {
	if (this->vector.size() <= 1)
		throw std::runtime_error(RED"Too few elements in vector!"RESET);
	std::multiset<int>	set(this->vector.begin(), this->vector.end());
	int	res = *set.end() - *set.begin();
	std::multiset<int>::iterator prevIt = set.begin();
	std::multiset<int>::iterator currIt = set.begin();
	std::advance(currIt, 1);
	while (currIt != set.end()) {
		if (*currIt - *prevIt < res)
			res = *currIt - *prevIt;
		std::advance(currIt, 1);
		std::advance(prevIt, 1);
	}
	return (res < 0 ? res * -1 : res);
}

unsigned int	Span::longestSpan() {
	if (this->vector.size() <= 1)
		throw std::runtime_error(RED"Too few elements in vector!"RESET);
	int	min = *std::min_element(this->vector.begin(), this->vector.end());
	int	max = *std::max_element(this->vector.begin(), this->vector.end());
	int	res = max - min;
	return (res < 0 ? res * -1 : res);
}