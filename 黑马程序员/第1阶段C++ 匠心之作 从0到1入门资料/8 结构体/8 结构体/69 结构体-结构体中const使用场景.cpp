#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<string>
using namespace std;

//const使用场景
struct student
{
	//成员列表
	string name;  //姓名
	int age;      //年龄
	int score;    //分数
};

//const使用场景
//将函数中的形参改为指针,可以减少内存空间,而且不会复制一个新的副本出来
void printStudent(const student *s) //加const防止函数体中的误操作
{
	//s->age = 100; //操作失败，因为加了const修饰
	cout << "姓名：" << s->name << " 年龄：" << s->age << " 分数：" << s->score << endl;

}
int main()
{
	student s = { "张三", 15, 70 };

	printStudent(&s);

	cout << "main中张三年龄为: " << s.age << endl;
	system("pause");
	return 0;
}