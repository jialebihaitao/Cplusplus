#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

int main()
{
	//1��ָ��Ķ���
	int a = 10; //�������ͱ���a
	//ָ�붨���﷨�� �������� * ָ������� ;
	int * p;
	//��ָ���¼����a�ĵ�ַ
	p = &a; //ָ��ָ�����a�ĵ�ַ
	cout << "a�ĵ�ַΪ:"<< &a << endl; //��ӡ����a�ĵ�ַ
	cout << "ָ��pΪ:"<< p << endl;  //��ӡָ�����p

	//2��ָ���ʹ��
	//����ͨ�������õķ�ʽ���ҵ�ָ��ָ����ڴ�
	//ָ��ǰ�� * ���������,�ҵ�ָ��ָ����ڴ��е����� 
	//*p
	//*pָ��10;
	*p = 1000;
	cout << "a=" << a << endl;
	cout << "*p = " << *p << endl;
	system("pause");
	return 0;
}