#ifndef WHATEVER_H
#define WHATEVER_H

#include <iostream>

/* Since the type of the function argument passed to the type T can be a class,
		and classes, as a rule, are not recommended to be passed by value,
		it is better to make the parameters and the return value of our
		function template constant references */

template <typename T>
const T&	min(const T& src1, const T& src2)
{
	return (src1 < src2) ? src1 : src2;
}

template <typename T>
const T&	max(const T& src1, const T& src2)
{
	return (src1 > src2) ? src1 : src2;
}

template <typename T>
void	swap(T& src1, T& src2)
{
	T tmp;

	tmp = src1;
	src1 = src2;
	src2 = tmp;
}

#endif
