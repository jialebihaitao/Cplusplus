#define _CRT_SECURE_NO_WARNINGS
//题目描述
//输入两个整数 a, ba, b，输出它们的和（ | a | , | b | \leq 10 ^ 9∣a∣, ∣b∣≤10^9）。
//）。
//
//注意
//
//Pascal 使用 integer 会爆掉哦！
//有负数哦！
//C / C++ 的 main 函数必须是 int 类型，而且最后要 return 0。这不仅对洛谷其他题目有效，而且也是 NOIP / NOI / CSP 比赛的要求！
//输入格式
//两个整数以空格分开。
//
//输出格式
//一个整数。
//
//输入输出样例
//输入 
//20 30
//输出 
//50

#include<iostream>
using namespace std;

int main()
{
	int a = 0;
	int b = 0;
	cin >> a;
	cin >> b;
	cout << a + b << endl;
	system("pause");
	return 0;
}