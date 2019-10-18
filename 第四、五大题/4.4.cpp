#include<iostream>

usingnamespacestd;

voidf(doublex = 50.6, inty = 10, charz = 'A');

intmain()

{

	doublea = 216.34;

	intb = 2;

	charc = 'E';

	f();

	f(a);

	f(a, b);

	f(a, b, c);

	system("pause");

	return0;

}

voidf(doublex, inty, charz)

{

	cout << "x=" << x << "y=" << y << "z=" << z << endl;

}
