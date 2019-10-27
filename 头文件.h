#pragma once
#include<iostream>
#include<cmath>
using namespace std;
class triangle
{
private:
	int a;
	int b;
	int c;
public:
	void input(int, int, int);
	void is_or_not();
	int perimeter();
	void type_of_triangle();
	void area();
	void display();

};
void triangle::input(int x, int y, int z)
{
	a = x;
	b = y;
	c = z;
}
void triangle::is_or_not()
{
	if (a + b <= c || a + c <= b || b + c <= a)
		cout << "The three sides you input cannot form a triangle " << endl;
}
int triangle::perimeter()
{
	int p = a + b + c;
	cout << "The perimeter of the triangle is:" << p << endl;
	return p;
}
void triangle::area()
{
	int ar = (a + b + c) / 2;
	int m = (ar - a)*(ar - b)*(ar - c);
	double area = sqrt(ar*m);
	cout << "The area of the triangle is:" << area << endl;
}
void triangle::type_of_triangle()
{
	if (a*a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a)
		cout << "The triangle you input is a  right triangle" << endl;
	else if (a*a + b * b - c * c >= 0 || a * a + c * c - b * b >= 0 || b * b + c * c - a * a >= 0)
		cout << "The triangle you input is a acute triangle" << endl;
}
void triangle::display()
{
	cout << "类的对象的this指针是:" << endl;
	cout << this << endl;
	cout << endl;
	cout << "a的地址" << endl;
	cout << &this->a << endl;
	cout << "b的地址:" << endl;
	cout << endl;
	cout << &this->b << endl;
	cout << "c的地址" << endl;
	cout << endl;
	cout << &this->c << endl;
}
