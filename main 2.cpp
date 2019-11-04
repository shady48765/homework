#include<iostream>
#include"Student2.h"

using namespace std;
int main()
{
	char *m = new char[10];                                                                //定义指针，并分配动态空间
	m = "XiaoMing";
	Student stu[N] = { Student(m), Student("WangYing", "2018110002", 20, "ShangHai") };    //定义对象数组，并为stu[0],st[1]赋值。其他对象被无参构造函数初始化                                             //定义学生类的对象数组
	Student stu1(m);                                                                      //定义对象stu1，调用有参构造函数
	Student stu2(stu1);                                                                   //定义对象stu2，调用拷贝构造函数
	stu1.display();
	stu2.display();
	cout << "Please select:" << endl;
	int c = menu();
	for (c; c != 4;)
	{
		op(c, stu);
		cout << "Please select(input a number):" << endl;
		cin >> c;
	}
	system("pause");
	return 0;

}
