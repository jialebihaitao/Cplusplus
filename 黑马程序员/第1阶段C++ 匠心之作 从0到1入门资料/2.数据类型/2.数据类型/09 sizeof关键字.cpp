#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
int main()
{
	//���� short(2)   int(4)   long(4)   long long(8)
	//��������sizeof�����������ռ�ÿռ��С
	//�﷨ sizeof(��������/����)
	cout << "short ������ռ�ڴ�ռ�Ϊ�� " << sizeof(short) << endl;

	cout << "int ������ռ�ڴ�ռ�Ϊ�� " << sizeof(int) << endl;

	cout << "long ������ռ�ڴ�ռ�Ϊ�� " << sizeof(long) << endl;

	cout << "long long ������ռ�ڴ�ռ�Ϊ�� " << sizeof(long long) << endl;

	system("pause");
	//���ʹ�С�Ƚ�
	//short<int<=long<=long long
	return 0;
}