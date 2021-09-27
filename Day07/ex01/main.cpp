#include "iter.hpp"

int	main() {
	char	*arr1 = createArr('a', SIZE);
	iter(arr1, SIZE, display);
	std::cout << std::endl;

	int	*arr2 = createArr(0, SIZE);
	iter(arr2, SIZE, display);
	std::cout << std::endl;

	double	*arr3 = createArr(1.154, SIZE);
	iter(arr3, SIZE, display);
	std::cout << std::endl;

	char	*arr4 = NULL;
	iter(arr4, SIZE, display);
	std::cout << std::endl;

	delete arr1;
	delete arr2;
	delete arr3;
	delete arr4;

	return (0);
}