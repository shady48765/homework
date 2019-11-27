#pragma once
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

class school
{

public:
	school();
	school(string, string);
	~school();
	void display();
private:
	string address;
	string sch_name;
};
class date
{
public:
	date();
	date(int, int, int);
	~date();
	void display();

private:
	int day, month, year;

};
class stu
{
public:
	stu();
	stu(string, bool, string, double, int a, int b, int c, string d, string e);
	~stu();
	void display_age();
	friend void info(stu *stu);
	static int num;

private:
	string name;
	bool gender;
	string id;
	double GPA;
	school sch;
	date birthday;

};
void number();
stu.cpp
#include "stu.h"
#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int stu::num = 0;
school::school()
{
	cout << "调用school的构造函数" << endl;
}
school::school(string a, string b)

{
	this->sch_name = a;
	this->address = b;
	cout << "调用school的构造函数" << endl;
}
school::~school()
{
	getchar();
	cout << "调用school的析构函数" << endl;

}
void school::display()
{
	cout << sch_name;
}
date::date()
{
	cout << "调用date的构造函数" << endl;
}
date::date(int a, int b, int c)
{
	this->year = a;
	this->month = b;
	this->day = c;
	cout << "调用date的构造函数" << endl;
}
date::~date()

{
	getchar();

	cout << "调用date的析构函数" << endl;
}
void date::display()
{
	int age = 2019 - year;
	cout << age << endl;
}

void stu::display_age()
{
	birthday.display();

}


stu::stu()
{
	num++;
	cout << "调用stu的构造函数" << endl;
}

stu::stu(string n, bool g, string i, double p, int a, int b, int c, string d, string e) :sch(d, e), birthday(a, b, c)
{
	num++;
	this->name = n;
	this->gender = g;
	this->id = i;
	this->GPA = p;
	cout << "调用stu的构造函数" << endl;

}

stu::~stu()
{
	num--;
	getchar();

	cout << "调用stu析构函数" << endl;
}
void info(stu *s)
{
	for (int i = 0; i < stu::num; i++)
	{
		cout << "学号：" << setw(12) << left <<
			s[i].id << "姓名：" << left
			<< setw(15) << s[i].name << "绩点" << setw(15) << s[i].GPA
			<< "学校：" << setw(15);
		s[i].sch.display();
		cout << "年龄：" << left << setw(8);
		s[i].display_age();

	}
}
void number()
{
	cout << "当前学生的人数是：" << stu::num << endl;
}
main.cpp
#include"stu.h"
#include<iostream>
using namespace std;
const int n = 3;
int main()
{
	double Gpa[n];
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		Gpa[i] = (double)
			(rand() % 400) / 100;
	}
	stu s[3] = { stu((string)"小明",bool(1),string("2018110000"),Gpa[0],2000,3,21,string("北京大学"),string("北京")),stu(string("李晓"),bool(0),string("2018110001"),Gpa[1],1999,8,7,string("电子科技大学"),string("四川")),stu(string("陈云"),(bool)1,(string)"2018110003",Gpa[2],1998,12,24,(string)"大连理工",(string)"辽宁") };
	number();

	info(s);

	system("pause");
	getchar();
}
#pragma once
