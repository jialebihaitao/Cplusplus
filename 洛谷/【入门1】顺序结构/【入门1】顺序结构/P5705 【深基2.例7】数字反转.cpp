#define _CRT_SECURE_NO_WARNINGS
//��Ŀ����
//����һ����С�� 100 ��С�� 1000��ͬʱ����С�����һλ��һ�������������� 123.4123.4 ��Ҫ���������ַ�ת��������� 4.3214.321 �������
//
//�����ʽ
//һ��һ��������
//
//�����ʽ
//һ��һ��������
//
//�����������
//���� 
//123.4
//��� 
//4.321
#include<iostream>
using namespace std;

int main()
{
	char a = 0;
	char b = 0;
	char c = 0;
	char d = 0;
	cin >> a >> b >> c >> d;
	cout << d << "." << c << b << a << endl;
	system("pause");
	return 0;
}