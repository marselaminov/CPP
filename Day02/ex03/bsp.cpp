# include "Fixed.hpp"
# include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point) {
	int	test1, test2, test3;
	test1 = ((a.getXRaw() - point.getXRaw()) * (b.getYRaw() - a.getYRaw())) -
			((b.getXRaw() - a.getXRaw()) * (a.getYRaw() - point.getYRaw()));
	test2 = ((b.getXRaw() - point.getXRaw()) * (c.getYRaw() - b.getYRaw())) -
			((c.getXRaw() - b.getXRaw()) * (b.getYRaw() - point.getYRaw()));
	test3 = ((c.getXRaw() - point.getXRaw()) * (a.getYRaw() - c.getYRaw())) -
			((a.getXRaw() - c.getXRaw()) * (c.getYRaw() - point.getYRaw()));
	return ((test1 > 0 && test2 > 0 && test3 > 0) || (test1 < 0 && test2 < 0 && test3 < 0));
}