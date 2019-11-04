#include"Student2.h"
#include<iostream>
#include<iomanip>
extern int amount = 2;
using namespace std;
Student::Student()
{
	name = NULL;
	age = 0;

	cout << "No arguments counstructor called!" << endl;
}
Student::Student(char *a, char *i, int ag, string d)
{
	if (a != NULL)
	{
		this->name = new char[strlen(a) + 1];
		strcpy(this->name, a);
	}
	strcpy(this->id, i);

	this->ad = d;
	this->age = ag;
	cout << "constructor called!" << endl;
}

Student::Student(const Student &other)
{

	if (other.name)
	{
		this->name = new char[strlen(other.name) + 1];
		strcpy(this->name, other.name);
	}
	strcpy(this->id, other.id);
	this->age = other.age;
	this->ad = other.ad;
	cout << " Copy constructor called!" << endl;
}
Student::~Student()
{
	cout << "Denstructor called!" << endl;
	if (this->name != NULL)
		delete[]name;
	getchar();
}
char* Student::getid()
{
	return id;

}
void Student::name_change()
{

	cout << "input the name you want to change to:" << endl;
	char *cname = new char[10];

	cin >> cname;
	strcpy(name, cname);

}
void Student::id_change()
{
	cout << "input the id you want to change to:" << endl;
	char *cid = new char[11];

	cin >> cid;
	strcpy(id, cid);
}
void Student::age_change()
{
	cout << "input the age you want to change to:" << endl;
	int cage;

	cin >> cage;
	age = cage;
}
void Student::ad_change()
{
	cout << "input the address you want to change to:" << endl;
	string cad;

	cin >>
		cad;
	ad = cad;
}

void Student::input()
{
	char *iname = new char[10];
	cout << "NAME:";
	cin >> iname;

	name = new char[strlen(iname) + 1];
	strcpy(name, iname);
	cout << "ID:";
	cin >> id;
	cout << "AGE:";
	cin >> age;
	cout << "ADDRESS:";
	cin >> ad;

}
void Student::display()
{

	cout << "name:" << setw(10) << name << "\tid:" << setw(10) << id << "\tage:" << setw(10) << age << "\taddress:" << setw(10) << ad << endl;

}

/***************************ÆäËûº¯Êý*******************************************/
Student f(Student a)
{
	Student r(a);
	return a;
}


int menu()
{

	int a;
	cout << "***************1.output information*********************" << endl;

	cout << "***************2.modify information*********************" << endl;

	cout << "***************3.iutput information*********************" << endl;

	cout << "***************4.off*************************************" << endl;
	cin >> a;
	return a;
}
void op(int m, Student *stu)
{

	if (1 <= m && m <= 3)
	{
		switch (m)
		{
		case 1: output(stu); break;
		case 2:
			change(stu); break;

		case 3:inputinfo(stu); break;
		case 4:break;
		}
	}
}

void inputinfo(Student *stu)
{
	char ch;
	int i = 0;
	do
	{
		stu[2 + i].input();
		i++;
		amount++;
		cout << "continue?(Y/N)" << endl;
		cin >> ch;
	} while (ch == 'Y');
}

void change(Student *stu)
{
	char f;
	int ch, i = 0, d, x = 0;
	char s[11] = { 0 };

	cout << "Please input the id of the student you want to modify and the type of infomation you would like to change" << endl;
	cout << "\t1.name\t\t2.id\t\t3.age\t\t4.address" << endl;
	cin >> s >> ch;

	for (i; i < amount; i++)
	{
		if (strcmp(stu[i].id, s) == 0)
		{
			d = i;
			x = 1;
		}
	}

	if (x)
	{
		switch (ch)
		{
		case 1:stu[d].name_change(); break;
		case 2:stu[d].id_change(); break;
		case 3:stu[d].age_change(); break;
		case 4:stu[d].ad_change(); break;


		}

	}
	else cout << "The id you inupt is not exist!" << endl;


}
void output(Student *a)
{

	for (int i = 0; i < amount; i++)
	{
		cout << "name:" << setw(10) << a[i].name << "\tid:" << setw(10) << a[i].id << "\tage:" << setw(10) << a[i].age << "\taddress:" << setw(10) << a[i].ad << endl;
	}
}

