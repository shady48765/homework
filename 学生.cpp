extern int amount;
#include<iostream>
#include<string>
const int N = 5;
using namespace std;
class Student
{
private:
	char *name;
	char id[13];
	int age;
	string ad;
public:
	Student();
	Student(char *, char *id = "2018110000", int age = 20, string d = "Hunan");
	Student(const Student &other);
	~Student();
	void name_change();
	void id_change();
	void age_change();
	void ad_change();
	void input();

	char* getid();
	void display();
	friend void change(Student *);
	friend void output(Student *);

};

int menu();
void op(int m, Student *a);
void inputinfo(Student *stu);

Student f(Student a);

