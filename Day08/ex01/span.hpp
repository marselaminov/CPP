#ifndef SPAN_HPP
#define SPAN_HPP

#define RED     "\x1b[31m"
#define GREEN   "\x1b[32m"
#define MAGENTA "\x1b[35m"
#define RESET   "\x1b[0m"

#include <iostream>
#include <exception>
#include <vector>

class Span {
public:
	Span(unsigned int N);
	Span(Span const &src);
	Span& operator=(Span const &src);
	int	operator[](unsigned int const index);
	~Span();

	void			addNumber(int n);
	void			addNumber(std::vector<int>::iterator &begin, std::vector<int>::iterator &end);
	void			addNumber(int *begin, int *end);
	unsigned int	shortestSpan();
	unsigned int	longestSpan();

private:
	Span();
	unsigned int		size;
	std::vector<int>	vector;
};

#endif