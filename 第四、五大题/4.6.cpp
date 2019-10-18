#include<iostream>

usingnamespacestd;

voidfun(intx, int&y)

{

	x += y;

	y += x;

}

intmain()

{

	intx = 5, y = 10;

	fun(x, y);

	fun(y, x);

	cout << "x=" << x << ",y=" << y << endl;

	system("pause");

	return0;

}
