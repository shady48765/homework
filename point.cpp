#include "point.h"

point::point()
{
	//cout << "调用无参构造函数！" << endl;

}
point::point(double a, double b)
{
	x = a;
	y = b;
	//cout << "调用有参构造函数！" << endl;
}
point::~point()
{
	//cout << "调用析构函数！" << endl;
	//getchar();

}
double point::GetX()
{
	return x;

}
double point::GetY()
{
	return y;
}
void point::SetXY(double ax, double ay)
{
	x = ax;
	y = ay;
}
void point::display()
{
	cout << "x:" << x << "\ty:" << y << endl;
}
void point::SwapAxis(double *xa, double *xb)
{
	x = *xa;
	y = *xb;
}

/*void point::SwapPoint(double &xa, double &xb)
{
	x = xa;
	y = xb;
}*/
void GetLength(point &A, point &B)
{
	double a1, a2, b1, b2;
	a1 = A.GetX();
	a2 = A.GetY();
	b1 = B.GetX();
	b2 = B.GetY();
	cout << "(" << a1 << "," << a2 << ")与(" << b1 << "," << b2 << ")的距离是：\t";
	cout << sqrt(pow((A.x - B.x), 2) + pow((A.y - B.y), 2)) << endl;
}

main.cpp
#include "point.h"
#include<iostream>
int main()
{
	point array[10] = { point(1,3),point(2,4) };
	point * array_heap = new point[10];
	*array_heap = point(1, 3);
	*(array_heap + 1) = point(2, 4);
	GetLength(array[0], array[1]);
	GetLength(array_heap[0], array_heap[1]);
	double *a = new double;
	double *b = new double;
	*a = (array_heap + 1)->GetX();
	*b = (array_heap + 1)->GetY();
	array[0].SwapAxis(a, b);
	cout << "array[0]与array_heap[1]交换后,array[0]\t";
	array[0].display();
	/*double *t=new double;
	double *s = new double;
	*t=array_heap->GetX();
	*s = array_heap->GetY();
	double &m = *t;
	double &n = *s;
	array[1].SwapPoint(m, n);
	cout << "第二次交换后,array[0]\t";
	array[0].display();
	cout << "array_heap[0]:\t";
	(array_heap+1)->display();*/
	//delete[]array_heap;
	delete a;
	delete b;
	delete[]array_heap;
	system("pause");

}
