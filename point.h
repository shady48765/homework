#pragma once
#include<iostream>
using namespace std;
class point
{
	double x, y;
public:
	point();
	point(double a, double b);
	~point();
	double GetX();
	double GetY();
	void SetXY(double ax, double ay);
	void display();
	void SwapAxis(double * xa, double *xb);
	//void SwapPoint(double &ra, double &xb);
	friend void GetLength(point &A, point &B);
};
#pragma once
