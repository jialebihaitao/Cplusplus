#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<string>
using namespace std;

//结构体数组

//1.定义结构体
struct student
{
	//成员列表
	string name;  //姓名
	int age;      //年龄
	int score;    //分数
};

int main()
{
	//2.创建结构体数组
	struct student arr[3] =
	{
		{ "张三", 18, 100 },
		{ "李四", 28, 99 },
		{ "王五", 38, 66 }
	};
    //3.给结构体数组中的元素赋值
	arr[2].name = "赵六";
	arr[2].age = 80;
	arr[2].score = 60;

	//4.遍历结构体数组
	for (int i = 0; i < 3; i++)
	{
		cout << "姓名：" << arr[i].name << " 年龄：" << arr[i].age << " 分数：" << arr[i].score << endl;
	}
	system("pause");
	return 0;
}