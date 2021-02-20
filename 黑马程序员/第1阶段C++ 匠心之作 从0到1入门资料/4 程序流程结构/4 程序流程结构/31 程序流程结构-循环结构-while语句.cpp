#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
int main() 
{
	//while循环
	//在屏幕中打印0~9
	
	int num = 0;
	//while ()中填入循环条件
	//注意：在执行循环语句时候，程序必须提供跳出循环的出口，否则出现死循环
	while (num < 10)
	{
		cout << "num = " << num << endl;
		num++;
	}

	system("pause");

	return 0;
}