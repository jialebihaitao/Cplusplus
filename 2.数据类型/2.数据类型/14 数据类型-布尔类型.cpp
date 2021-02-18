#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
int main()
{
	//1.创建布尔数据类型
	bool flag = true;
	cout << flag << endl;//1

	flag = false;//false代表假
	cout << flag << endl;

	//本质上 1代表真 0代表假

	//2.查看布尔类型所占内存空间大小
	cout << "bool类型所占内存空间:" << sizeof(bool) << endl;

	system("pause");
	return 0;
}