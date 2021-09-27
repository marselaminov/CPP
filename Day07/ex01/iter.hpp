#ifndef ITER_HPP
#define ITER_HPP
#define SIZE 4

#include <iostream>

template <typename T>
void	iter(const T* arr, int size, void(*f)(const T&)) {
	if (arr) {
		for (int i = 0; i < size; ++i)
			f(arr[i]);
	}
	else
		std::cout << "pointer to array is NULL!" << std::endl;
}

template <typename T>
void	display(T const &t) {
	std::cout << "print : " << t << std::endl;
}

template <typename T>
T*	createArr(T i, int size) {
	T	*res = new T[size];

	int j = 0;
	while (j < size) {
		res[j] = i++;
		j++;
	}
	return (res);
}

#endif