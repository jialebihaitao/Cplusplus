#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

//ֵ����
//���庯��,ʵ���������ֽ��н���

//�����������Ҫ����ֵ,������ʱ�����дvoid
void swap(int num1, int num2)
{
	cout << "����ǰ:" << endl;
	cout << "num1=" << num1 << endl;
	cout << "num2=" << num2 << endl;

	int t = num1;
	num1 = num2;
	num2 = t;

	cout << "������:" << endl; 
	cout << "num1=" << num1 << endl;
	cout << "num2=" << num2<< endl;

	//return;   ����ֵ����Ҫ��ʱ��,���Բ�дreturn
}

int main()
{
	int a = 10;
	int b = 20;

	cout << "a=" << a << endl;
	cout << "b=" << b << endl;

	swap(a, b);

	//��������ֵ���ݵ�ʱ��,�������βη����ı�,������Ӱ��ʵ��
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	system("pause");
	return 0;
}