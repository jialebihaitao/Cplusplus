#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

int main()
{
	//ָ�������
	//����ָ�����������Ԫ��

	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	int * p = arr;  //arr���������׵�ַ

	cout << "��һ��Ԫ�أ� " << arr[0] << endl;
	cout << "ָ����ʵ�һ��Ԫ�أ� " << *p << endl;

	cout << "����ָ��ƫ������" << endl;
	for (int i = 0; i < 10; i++)
	{
		//����ָ���������
		cout << *p << endl;
		p++;//��ָ�����ƫ���ĸ��ֽ�
	}
	system("pause");
	return 0;
}