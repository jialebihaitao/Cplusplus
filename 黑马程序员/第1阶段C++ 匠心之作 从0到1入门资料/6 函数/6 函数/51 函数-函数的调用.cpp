#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
//����ӷ�����
int add(int num1, int num2)
//���������ʱ��,num1��num2��û����ʵ����
//��ֻ��һ����ʽ�ϵĲ���,����β�
{
	int sum = num1 + num2;
	return sum;
}

int main()
{
	//main��������add����
	int a = 10;
	int b = 20;
	//a��b��Ϊ ʵ�ʲ���,���ʵ��
	//�����ú�����ʱ��,ʵ�ε�ֵ�ᴫ�ݸ��β�

	//���������﷨:��������(����)
	int c=add(a, b);
	cout << "sum=" << c << endl;
	system("pause");
}