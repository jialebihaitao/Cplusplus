#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	//1.C风格字符串
	//      []
	//注意
	//      等号后面要用""
	char str1[] = "Hello World";
	cout << str1 << endl;

	//2.C++风格字符串
	//注意 包含头文件 #include<string>
	string str2 = "Hello World";
	cout << str2 << endl;

	system("pause");
	return 0;
}