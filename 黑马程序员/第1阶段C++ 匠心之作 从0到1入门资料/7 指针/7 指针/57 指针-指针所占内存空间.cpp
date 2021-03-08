#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

int main()
{
	//指针所占内存空间大小
	int a = 10;

	int * p=&a;//指针指向数据a的地址

	cout << *p << endl; //* 解引用
	cout << "sizeof(p)="<<sizeof(p) << endl;
	cout << "sizeof(int*)="<< sizeof(int*) << endl;
	cout << "sizeof(char *)="<< sizeof(char *) << endl;
	cout << "sizeof(float *)"<< sizeof(float *) << endl;
	cout << "sizeof(double *)"<< sizeof(double *) << endl;
	system("pause");
	return 0;
}

//所有指针类型在32位操作系统下是4个字节,在64位操作系统下是八个字节