# include "Fixed.hpp"
# include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point);

int	main() {
	Point	a(1.0f, 1.0f);
	Point	b(3.0f, 5.0f);
	Point	c(7.0f, 1.0f);

	Point	first_p(3, 3);
	std::cout << "The first point with coordinates (" << first_p.getXFloat()
		<< "," << first_p.getYFloat() << ")";
	bsp(a, b, c, first_p) ? std::cout << "inside triangle\n" :
		std::cout << "not inside triangle" << std::endl;

	Point	second_p(6, 7);
	std::cout << "The first point with coordinates (" << second_p.getXFloat()
	<< "," << second_p.getYFloat() << ")";
	bsp(a, b, c, second_p) ? std::cout << "inside triangle\n" :
		std::cout << "not inside triangle" << std::endl;

	Point	third_p(1.0, 1.0);
	std::cout << "The first point with coordinates (" << third_p.getXFloat()
	<< "," << third_p.getYFloat() << ")";
	bsp(a, b, c, third_p) ? std::cout << "inside triangle\n" :
		std::cout << "not inside triangle" << std::endl;

	return 0;
}