#define _CRT_SECURE_NO_WARNINGS
//练习案例：水仙花数
//
//案例描述：水仙花数是指一个 3 位数，它的每个位上的数字的 3次幂之和等于它本身
//
//例如：1 ^ 3 + 5 ^ 3 + 3 ^ 3 = 153
//
//请利用do...while语句，求出所有3位数中的水仙花数

#include<iostream>
using namespace std;
int main()
{
	//1.将所有的三位数输出
	int num = 100;
	do
	{
		//2.在所有的三位数中找到水仙花数
		int a = 0;//个位
		int b = 0;//十位
		int c = 0;//百位
		a = num % 10;//获取个位
		b = num / 10 % 10;//获取十位
		c = num / 100;//获取百位
		if (a*a*a+b*b*b+c*c*c==num)//如果是水仙花数,打印
		{
			cout << num << endl;
		}		
		num++;
	} while (num < 1000);
	system("pause");
	return 0;
}

//获取个位 对数字取模于10
//获取十位 先整除于10,得到两位数,再取模于10,得到个位
//获取百位 直接整除于100
//水仙花数判断 各位^3+十位^3+百位^3=本身
