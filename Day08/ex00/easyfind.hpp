#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#define RED     "\x1b[31m"
#define GREEN   "\x1b[32m"
#define MAGENTA "\x1b[35m"
#define RESET   "\x1b[0m"

#include <iostream>
#include <exception>
#include <vector>
#include <list>
#include <map>

template <typename T>
typename T::iterator easyfind(T &container, int value) {
	typename T::iterator	it;
	if (container.empty() == true)
		throw std::runtime_error(RED"Empty container!"RESET);
	it = std::find(container.begin(), container.end(), value);
	if (it == container.end())
		throw std::runtime_error(RED"Value not found"RESET);
	return (it);
}

template <typename T>
void	display(T &container) {
	typename T::iterator	it;
	for (it = container.begin(); it != container.end(); ++it)
		std::cout << *it << std::endl;
}

template<typename T1, typename T2>
typename std::map<T1, T2>::iterator easyfind(std::map<T1, T2> &container, int value)
{
	typename std::map<T1, T2>::iterator it;
	if (container.empty() == true)
		throw std::runtime_error(RED"Empty container!"RESET);
	for (it = container.begin(); it != container.end(); ++it) {
		if (it->first == value)
			break;
	}
	if (it == container.end())
		throw std::runtime_error(RED"Value not found"RESET);
	return it;
}

#endif