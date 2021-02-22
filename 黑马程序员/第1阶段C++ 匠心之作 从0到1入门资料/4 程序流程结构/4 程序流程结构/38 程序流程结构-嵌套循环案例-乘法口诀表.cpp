#define _CRT_SECURE_NO_WARNINGS
//列数*行数=计算结果
//列数<=当前行数
#include<iostream>
using namespace std;
int main()
{
	//乘法口诀表
	for (int i = 1; i <= 9; i++)
	{
		for (int j = 1; j <= i; j++)//列数<=当前行数
		{
			cout << j << "*" << i << "=" << j*i<<"  ";
		}
		cout << "\n";
	}
	system("pause");
	return 0;
}