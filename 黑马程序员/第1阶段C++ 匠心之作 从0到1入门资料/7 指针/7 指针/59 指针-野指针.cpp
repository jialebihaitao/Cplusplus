#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

int main()
{
	//ָ�����pָ���ڴ��ַ���Ϊ0x1100�Ŀռ�
	int * p = (int *)0x1100;

	//����Ұָ�뱨�� 
	cout << *p << endl;
	system("pause");
	return 0;
}