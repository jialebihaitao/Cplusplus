#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

//�����ķ��ļ���д
//ʵ���������ֽ��н����ĺ���

//����������
//void swap(int a, int b);

//�����Ķ���
void swap(int a, int b)
{
	int t = a;
	a = b;
	b = t;

	cout << "a=" << a<<  endl;
	cout << "b=" << b << endl;
}

int main()
{
	int a = 10;
	int b = 20;
	swap(a, b);
	system("pause");
	return 0;
}

//�������ļ���дһ����4������
//
//1. ������׺��Ϊ.h��ͷ�ļ�
//2. ������׺��Ϊ.cpp��Դ�ļ�
//3. ��ͷ�ļ���д����������
//4. ��Դ�ļ���д�����Ķ���