#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <exception>
#define RED     "\x1b[31m"
#define GREEN   "\x1b[32m"
#define RESET   "\x1b[0m"

template <typename T>
class Array {
public:
	Array() : arr(NULL), size_n(0) {}

	Array(unsigned int n) : arr(new T[n]), size_n(n) {}

	Array(Array const &src) {
		this->size_n = src.size_n;
		this->arr = new T[this->size_n];
		for (unsigned int i = 0; i < this->size_n; ++i)
			this->arr[i] = src.arr[i];
	}

	Array & operator=(Array const &src) {
		if (this != &src) {
			this->size_n = src.size_n;
			delete[] this->arr;
			this->arr = new T[this->size_n];
			for (unsigned int i = 0; i < this->size_n; ++i)
				this->arr[i] = src.arr[i];
		}
		return (*this);
	}

	~Array() {
		if (this->arr)
			delete[] this->arr;
	}

	class InvalidIndexException : public std::exception {
	public:
		virtual const char* what() const throw() {
			return (RED"Index is out of range!"RESET);
		}
	};

	T & operator[](unsigned int index) const {
		if (index < 0 || index > this->size_n || this->size_n == 0)
			throw InvalidIndexException();
		else
			return (this->arr[index]);
	}

	unsigned int	size() const { return (this->size_n); }

private:
	T				*arr;
	unsigned int	size_n;
};

#endif


