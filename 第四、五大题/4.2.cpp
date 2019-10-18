#include<iostream>

usingnamespacestd;

intmain()

{

	intarr[4] = { 1,2,3,4 };

	int*a = arr;

	int*&p = a;

	inti;

	p++;

	*p = 100;

	cout << *a << "" << *p << endl;

	for (i = 0;i < 4;i++)

		cout << arr[i] << "";

	cout << endl;

	intb = 10;

	p = &b;

	cout << *a << "" << *p << endl;

	for (i = 0;i < 4;i++)

	{

		cout << arr[i] << "";



	}

	cout << endl;

	system("pause");

	return0;

}
