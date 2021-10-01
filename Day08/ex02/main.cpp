#include "mutantstack.hpp"
#include "mutantstack.cpp"

int main() {
	MutantStack<int> mstack;
	std::cout << GREEN"Pushing 4 new elements on the stack..."RESET << std::endl;
	mstack.push(5);
	mstack.push(17);
	mstack.push(21);
	mstack.push(42);

	std::cout << "----------------------------------------------" << std::endl;

	std::cout << YELLOW"Element in top : "RESET;
	std::cout << mstack.top() << std::endl;
	std::cout << YELLOW"Stack size : "RESET;
	std::cout << mstack.size() << std::endl;

	std::cout << "----------------------------------------------" << std::endl;

	// remove one element from stack
	std::cout << GREEN"Try to pop one element..."RESET << std::endl;
	mstack.pop();
	std::cout << YELLOW"New element in top : "RESET;
	std::cout << mstack.top() << std::endl;
	std::cout << YELLOW"New stack size : "RESET;
	std::cout << mstack.size() << std::endl;

	std::cout << "----------------------------------------------" << std::endl;

	std::cout << GREEN"Pushing 3 new elements on the stack..."RESET << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	std::cout << YELLOW"New element in top : "RESET;
	std::cout << mstack.top() << std::endl;
	std::cout << YELLOW"New stack size : "RESET;
	std::cout << mstack.size() << std::endl;

	std::cout << "----------------------------------------------" << std::endl;

	// iterate through stack + display each elements
	std::cout << GREEN"Try to iterate through stack and display each his elements..."RESET << std::endl;
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	std::cout << YELLOW"stack start is iterator 'it' =  "RESET << *it << std::endl;
	++it;
	std::cout << YELLOW"increment iterator =  "RESET << *it << std::endl;
	--it;
	std::cout << YELLOW"decrement iterator = "RESET << *it << std::endl;

	std::cout << "----------------------------------------------" << std::endl;

	std::cout << GREEN"Trying to display our stack..."RESET << std::endl;
	int i = 0;
	while (it != ite)
	{
		std::cout << YELLOW"iterator[" << i << "] = "RESET << *it << std::endl;
		++it;
		++i;
	}

	std::cout << "----------------------------------------------" << std::endl;

	std::cout << BLUE"THANKS TO C ++ MODULES FOR NEW KNOWLEDGE!"RESET << std::endl;

	std::stack<int> s(mstack);
	return 0;
}