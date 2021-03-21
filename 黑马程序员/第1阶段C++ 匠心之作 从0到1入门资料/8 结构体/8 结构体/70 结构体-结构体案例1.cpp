#define _CRT_SECURE_NO_WARNINGS
//案例描述：

//学校正在做毕设项目，每名老师带领5个学生，总共有3名老师，需求如下
//设计学生和老师的结构体，其中在老师的结构体中，有老师姓名和一个存放5名学生的数组作为成员
//学生的成员有姓名、考试分数，创建数组存放3名老师，通过函数给每个老师及所带的学生赋值
//最终打印出老师数据以及老师所带的学生数据。

#include<iostream>
using namespace std;
#include<string>
#include<ctime>
//学生的结构体
struct Student
{
	//姓名
	string sName;
	//分数
	int score;
};

//老师的结构体定义
struct Teacher
{
	//姓名
	string tName;
	//学生数组
	struct Student sArray[5];
};

//给老师和学生赋值的函数
void allocateSpace(struct Teacher tArray[],int len)
{
	string nameSeed = "ABCDE";
	//给老师开始赋值
	for (int i = 0; i < len; i++)
	{
		tArray[i].tName = "Teacher_";
		tArray[i].tName += nameSeed[i];

		//通过循环给每名老师所带的学生赋值
		for (int j = 0; j < 5; j++)
		{
			tArray[i].sArray[j].sName = "Student_";
			tArray[i].sArray[j].sName += nameSeed[j];

			int random = rand() % 61 + 40;
			//rand()%60  0~59
			//rand()%60+40 40~99
			//rand()%61  0~60
			//rand()%61+40  40~100

			tArray[i].sArray[j].score = random;
		}
	}
}

//打印所有信息
void printInfo(struct Teacher tArray[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "老师姓名:" << tArray[i].tName << endl;
		for (int j = 0; j < 5; j++)
		{
			cout << "\t学生姓名:" << tArray[i].sArray[j].sName << " 考试分数:" << tArray[i].sArray[j].score << endl;
		}
	}
}
int main()
{
	srand((unsigned int)time(NULL)); 
	//随机数种子 头文件 #include <ctime>
	//1.创建三名老师的数组
	struct Teacher tArray[3];

	//2.通过函数给三名老师的信息赋值,并给老师带的学生信息赋值
	int len = sizeof(tArray) / sizeof(tArray[0]);
	allocateSpace(tArray, len);
	//3.打印所有老师及所带的学生信息
	printInfo(tArray, len);

	system("pause");
	return 0;
}