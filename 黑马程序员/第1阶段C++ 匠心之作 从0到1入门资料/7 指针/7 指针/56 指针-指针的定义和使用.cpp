#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

int main()
{
	//1、指针的定义
	int a = 10; //定义整型变量a
	//指针定义语法： 数据类型 * 指针变量名 ;
	int * p;
	//让指针记录变量a的地址
	p = &a; //指针指向变量a的地址
	cout << "a的地址为:"<< &a << endl; //打印数据a的地址
	cout << "指针p为:"<< p << endl;  //打印指针变量p

	//2、指针的使用
	//可以通过解引用的方式来找到指针指向的内存
	//指针前加 * 代表解引用,找到指针指向的内存中的数据 
	//*p
	//*p指向10;
	*p = 1000;
	cout << "a=" << a << endl;
	cout << "*p = " << *p << endl;
	system("pause");
	return 0;
}