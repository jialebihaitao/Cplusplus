#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<string>
using namespace std;

//1.创建学生数据类型:学生包括(姓名 年龄 分数)
//自定义数据类型,一些类型集合组成的一个类型
//语法 struct 类型名称{ 成员列表 }

//此处struct 关键字不可以省略
struct Student
{
	//成员列表

	string name;  //姓名
	int age;      //年龄
	int score;    //分数
};/*stu3;*/ //顺便创建结构体变量-创建方式3 


int main()
{
	//2.通过学生类型创建具体学生

	//2.1 struct Student s1
	struct Student  s1; //struct 关键字可以省略
	//给s1属性赋值:通过 . 访问结构体变量中的属性
	s1.name = "张三";
	s1.age = 18;
	s1.score = 100;

	cout << "姓名:" << s1.name << " 年龄:" << s1.age << " 分数:" << s1.score << endl;

	//2.2 struct Student s2={ , , ,}
	struct Student s2 = { "李四", 19, 80 };
	cout << "姓名:" << s2.name << " 年龄:" << s2.age << " 分数:" << s2.score << endl;

	//2.3 在定义结构体时顺便创建结构体变量
	stu3.name = "王五";
	stu3.age = 20;
	stu3.score = 60;
	cout << "姓名:" << stu3.name << " 年龄:" << stu3.age << " 分数:" << stu3.score << endl;

	system("pause");
	return 0;
}

//总结1：定义结构体时的关键字是struct，不可省略
//总结2：创建结构体变量时，关键字struct可以省略
//总结3：结构体变量利用操作符 .  访问成员