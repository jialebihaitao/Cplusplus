#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
int main()
{
	//1.����������������
	bool flag = true;
	cout << flag << endl;//1

	flag = false;//false�����
	cout << flag << endl;

	//������ 1������ 0�����

	//2.�鿴����������ռ�ڴ�ռ��С
	cout << "bool������ռ�ڴ�ռ�:" << sizeof(bool) << endl;

	system("pause");
	return 0;
}