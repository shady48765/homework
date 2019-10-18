#include<iostream>

usingnamespacestd;


int&s(constint&a, int&b)
{

	b += a;

	returnb;

}

intmain()

{

	intx = 500, y = 1000, z = 0;

	cout << x << '\t' << y << '\t' << z << '\n';

	s(x, y);

	cout << x << '\t' << y << '\t' << z << '\n';

	z = s(x, y);

	cout << x << '\t' << y << '\t' << z << '\n';

	s(x, y) = 200;

	cout << x << '\t' << y << '\t' << z << '\n';

	system("pause");

	return0;

}
