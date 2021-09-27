#include "Base.hpp"

Base* generate() {
	Base *base = NULL;
	srand(time(NULL));

	int i = rand() % 3;
	switch (i) {
		case 0:
			base = new A;
			break;
		case 1:
			base = new B;
			break;
		case 2:
			base = new C;
			break;
	}
	return (base);
}

void	identify(Base *p) {
	A *a = dynamic_cast<A*>(p);
	B *b = dynamic_cast<B*>(p);
	C *c = dynamic_cast<C*>(p);

	if (a == p)
		std::cout << "Pointer : A" << std::endl;
	if (b == p) {
		std::cout << b << std::endl;
		std::cout << p << std::endl;
		std::cout << "Pointer : B" << std::endl;
	}
	if (c == p)
		std::cout << "Pointer : C" << std::endl;
}

void	identify(Base &p) {
	std::cout << "Reference : " << std::endl;

	try {
		A a = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
	}
	catch (const std::bad_cast &e) {
		std::cerr << e.what() << std::endl;
	}

	try {
		B b = dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
	}
	catch (const std::bad_cast &e) {
		std::cerr << e.what() << std::endl;
	}

	try {
		C c = dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
	}
	catch (const std::bad_cast &e) {
		std::cerr << e.what() << std::endl;
	}
}

int main() {
	Base *base = generate();

	identify(base);
	identify(*base);

	delete base;

	return (0);
}