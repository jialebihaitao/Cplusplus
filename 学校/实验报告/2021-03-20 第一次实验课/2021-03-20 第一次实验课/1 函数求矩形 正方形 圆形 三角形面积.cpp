#define _CRT_SECURE_NO_WARNINGS
//1.�ú�������� ������ Բ�� ���������
#include<iostream>
using namespace std;
//�������
int area1(int a, int b)
{
	return a*b;
}

//���������
int area2(int c)
{
	return c*c;
}

//Բ�����
float area3(int r)
{
	float PI = 3.14;
	return PI*r*r;
}

//���������
int area4(int d, int e, int f)
{
	int p = (d + e + f) / 2;
	int s = p*(p - d)*(p - e)*(p - f);
	return sqrt(s);
}

int main()
{
	//�������
	int a = 0;
	int b = 0;
	cout << "��������ε�������a,b" << endl;
	cin >> a >> b;
	int rectangular=area1(a, b);
	cout << "�������Ϊ:" << rectangular << endl;

	//���������
	int c = 0;
	cout << "�����������εı�r" << endl;
	cin >> c;
	int square=area2(c);
	cout << "���������Ϊ:" << square << endl;
	
	//Բ�����
	int r = 0;
	cout << "������Բ�İ뾶r" << endl;
	cin >> r;
	float circle=area3(r);
	cout << "Բ�����Ϊ" << circle << endl;

	//���������
	int d = 0;
	int e = 0;
	int f = 0;
	cout << "������������������d,e,f" << endl;
	cin >> d >> e >> f;
	int triangle=area4(d, e, f);
	cout << "���������Ϊ" << triangle << endl;

	system("pause");
	return 0;
}