#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <iostream>
//#include <deque>

//template < class T, class Container = deque<T> >
//class stack {
//protected:
//	Container C; ---> it's a base container for stack
//public:
//	explicit    stack(const Container& = Container ());
//	bool        empty() const           { return c.empty(); }
//	size_type   size() const            { return c.size(); }
//	value_type& top()                   { return c.back(); }
//	const value_type& top() const       { return c.back(); }
//	void push(const valut_type & x)     { c.push_back(x); }
//	void pop()                          { c.pop_back(); }
//};

template<typename T>
class MutantStack : public std::stack<T> {
public:
	MutantStack();
	MutantStack(MutantStack<T> const &src);
	MutantStack& operator=(MutantStack<T> const &src);
	virtual ~MutantStack();

	typedef typename std::stack<T>::container_type::iterator iterator;
	iterator	begin();
	iterator	end();

};

#endif