#include<iostream>

usingnamespacestd;

inti = 0;

intmain()

{

	inti = 5;

	{
		i = 7;

		cout << ":i=" << :i << endl;

		cout << "i=" << :i << endl;

		: i = 1;

		cout << ":i=" << :i << endl;

	}

	cout << "i=" << i << endl;

	cout << ":i=" << :i << endl;

	i += :i;

	: i = 100;

	cout << "i=" << i << endl;

	cout << ":i=" << :i << endl;

	system("pause");

	return0;

}
