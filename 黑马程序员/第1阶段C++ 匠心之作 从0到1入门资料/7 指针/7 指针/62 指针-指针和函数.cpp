#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

//ʵ���������ֽ��н���
//1.ֵ����
void swap1(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
}

//��ַ����
void swap2(int * p1, int *p2)
{
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}
int main()
{
	int a = 10;
	int b = 20;

	//1.ֵ����
	swap1(a, b); // ֵ���ݲ���ı�ʵ��

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	//2.��ַ����
	swap2(&a, &b); //��ַ���ݻ�ı�ʵ��

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	system("pause");
	return 0;
}