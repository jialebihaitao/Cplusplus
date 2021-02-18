#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
//逻辑运算符  --- 与   同真为真
int main() {

	int a = 10;
	int b = 10;
	//同真为真
	cout << (a && b) << endl;// 1

	a = 10;
	b = 0;
	//一假为假
	cout << (a && b) << endl;// 0 

	a = 0;
	b = 0;
	//同假为假
	cout << (a && b) << endl;// 0

	system("pause");

	return 0;
}