#define _CRT_SECURE_NO_WARNINGS
//例如：每个老师辅导一个学员，一个老师的结构体中，记录一个学生的结构体
#include<iostream>
#include<string>
using namespace std;

//学生结构体定义
struct student
{
	//成员列表
	string name;  //姓名
	int age;      //年龄
	int score;    //分数
};

//教师结构体定义
struct teacher
{
	//成员列表
	int id; //职工编号
	string name;  //教师姓名
	int age;   //教师年龄
	struct student stu; //子结构体 学生
};

int main()
{
	//结构体嵌套结构体
	//创建老师
	teacher t;
	t.id = 10000;
	t.age = 50;
	t.stu.name = "小王";
	t.stu.age = 20;
	t.stu.score = 60;

	cout << "教师 职工编号： " << t.id << " 姓名： " << t.name << " 年龄： " << t.age << endl;

	cout << "辅导学员 姓名： " << t.stu.name << " 年龄：" << t.stu.age << " 考试分数： " << t.stu.score << endl;

	system("pause");
	return 0;
}