#include "span.hpp"

int main()
{
	Span sp = Span(5);
	try {
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		sp.addNumber(55); // error, because span can content only 5 elements
	}
	catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << "------------------" << std::endl;
	try {
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}


	Span sp2 = Span(10000);
	std::vector<int>	vec;
	srand(time(NULL));
	for (int i = 0; i < 10000; ++i) {
		vec.push_back(i * 100);
	}
	std::vector<int>::iterator a = vec.begin();
	std::vector<int>::iterator b = vec.end();
	try {
		sp2.addNumber(a, b);
	}
	catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << "------------------" << std::endl;
	try {
		std::cout << sp2.shortestSpan() << std::endl;
		std::cout << sp2.longestSpan() << std::endl;
	}
	catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	return (0);
}