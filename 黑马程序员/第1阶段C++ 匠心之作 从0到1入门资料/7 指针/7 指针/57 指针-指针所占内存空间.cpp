#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

int main()
{
	//ָ����ռ�ڴ�ռ��С
	int a = 10;

	int * p=&a;//ָ��ָ������a�ĵ�ַ

	cout << *p << endl; //* ������
	cout << "sizeof(p)="<<sizeof(p) << endl;
	cout << "sizeof(int*)="<< sizeof(int*) << endl;
	cout << "sizeof(char *)="<< sizeof(char *) << endl;
	cout << "sizeof(float *)"<< sizeof(float *) << endl;
	cout << "sizeof(double *)"<< sizeof(double *) << endl;
	system("pause");
	return 0;
}

//����ָ��������32λ����ϵͳ����4���ֽ�,��64λ����ϵͳ���ǰ˸��ֽ�