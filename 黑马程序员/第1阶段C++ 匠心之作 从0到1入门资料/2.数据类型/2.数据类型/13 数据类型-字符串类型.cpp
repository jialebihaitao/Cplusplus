#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	//1.C����ַ���
	//      []
	//ע��
	//      �Ⱥź���Ҫ��""
	char str1[] = "Hello World";
	cout << str1 << endl;

	//2.C++����ַ���
	//ע�� ����ͷ�ļ� #include<string>
	string str2 = "Hello World";
	cout << str2 << endl;

	system("pause");
	return 0;
}