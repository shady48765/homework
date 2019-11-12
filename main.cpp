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
