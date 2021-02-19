#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
//1.#define 宏变量
//#define Day 7
//int main()
//{
//	cout << "一周共有:" << Day << "天" << endl;
//	system("pause");
//	return 0;
//}
//2.const修饰的变量
int main()
{
	const int Day = 7;
	cout << "一周共有:" << Day << "天" << endl;
	system("pause");
	return 0;
}