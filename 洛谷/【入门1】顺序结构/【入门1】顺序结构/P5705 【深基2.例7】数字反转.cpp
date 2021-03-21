#define _CRT_SECURE_NO_WARNINGS
//题目描述
//输入一个不小于 100 且小于 1000，同时包括小数点后一位的一个浮点数，例如 123.4123.4 ，要求把这个数字翻转过来，变成 4.3214.321 并输出。
//
//输入格式
//一行一个浮点数
//
//输出格式
//一行一个浮点数
//
//输入输出样例
//输入 
//123.4
//输出 
//4.321
#include<iostream>
using namespace std;

int main()
{
	char a = 0;
	char b = 0;
	char c = 0;
	char d = 0;
	cin >> a >> b >> c >> d;
	cout << d << "." << c << b << a << endl;
	system("pause");
	return 0;
}