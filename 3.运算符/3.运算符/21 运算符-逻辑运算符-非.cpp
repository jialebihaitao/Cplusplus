#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
//逻辑运算符  --- 非   真变假，假变真
int main()
{

	int a = 10;
	//0为假 非0为真
	cout << !a << endl; // 0
	//双重否定表肯定
	cout << !!a << endl; // 1

	system("pause");

	return 0;
}