
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include"class.h"


/*----------------------------------*
		  Global Varables
*-----------------------------------*/



/*----------------------------------*
		  Main Function
*-----------------------------------*/
triangle f(triangle x)
{
	return x;
}
int main()
{


	triangle a;


	cout << "类的对象的大小为：" << sizeof(a) << endl;

	int x, y, z;
	cin >> x >> y >> z;
	a.input(x, y, z);
	a.is_or_not();
	a.perimeter();
	a.area();
	a.type_of_triangle();
	a.display();
	triangle b(a);
	b.display();
	triangle c = f(a);
	c.display();
	system("pause");
	return 0;
}
