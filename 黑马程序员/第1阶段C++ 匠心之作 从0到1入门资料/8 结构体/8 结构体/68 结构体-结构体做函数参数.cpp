#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<string>
using namespace std;


struct student
{
	//成员列表
	string name;  //姓名
	int age;      //年龄
	int score;    //分数
};

//打印学生信息函数
//1.值传递:
void printStudent1(struct student s)
{
	s.age = 100;
	cout << "子函数中 姓名：" << s.name << " 年龄： " << s.age << " 分数：" << s.score << endl;
}

//2.地址传递
void printStudent2(struct student *p)
{
	p->age = 200;
	cout << "子函数中 姓名：" << p->name << " 年龄： " << p->age << " 分数：" << p->score << endl;
}
int main()
{
	//结构体做函数参数

	//将学生传入到一个参数中,打印学生身上的所有信息

	//创建结构体变量
	struct student s;
	s.name = "张三";
	s.age = 20;
	s.score = 85;

	cout << "主函数中 姓名：" << s.name << " 年龄： " << s.age << " 分数：" << s.score << endl;
	printStudent1(s);
	printStudent2(&s);
	system("pause");
	return 0;
}
//如果不想修改主函数中的数据，用值传递，反之用地址传递

