#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
int main() 
{
	//do...while循环
	//在屏幕中打印0~9

	int num = 0;

	do
	{
		cout << num << endl;
		num++;

	} while (num < 10);

	//与while循环区别在于，do...while先执行一次循环语句，再判断循环条件


	system("pause");

	return 0;
}