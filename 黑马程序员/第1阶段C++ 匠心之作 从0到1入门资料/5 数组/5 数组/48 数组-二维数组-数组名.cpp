#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
int main() 
{

	//��ά������������;
	  //�鿴��ά������ռ�ڴ�ռ�
	  //��ȡ��ά�����׵�ַ
	int arr[2][3] =
	{
		{ 1, 2, 3 },
		{ 4, 5, 6 }
	};

	//1.���Բ鿴ռ�ÿռ��ڴ��С
	cout << "��ά����ռ���ڴ�ռ�Ϊ�� " << sizeof(arr) << endl;
	cout << "��ά�����һ��ռ���ڴ�Ϊ�� " << sizeof(arr[0]) << endl;
	cout << "��ά�����һ��Ԫ��ռ���ڴ�Ϊ�� " << sizeof(arr[0][0]) << endl;

	cout << "��ά���������� " << sizeof(arr) / sizeof(arr[0]) << endl;
	//��ά��������=��ά����ռ���ڴ�ռ�/��ά�����һ��ռ���ڴ�

	cout << "��ά���������� " << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;
	//��ά��������=��ά�����һ��ռ���ڴ�/��ά�����һ��Ԫ��ռ���ڴ�

	//2.���Բ鿴��ά������׵�ַ
	cout << "��ά�����׵�ַΪ��" << arr << endl;
	cout << "��ά�����һ�е�ַΪ��" << arr[0] << endl;
	cout << "��ά����ڶ��е�ַΪ��" << arr[1] << endl;

	cout << "��ά�����һ��Ԫ�ص�ַΪ��" << &arr[0][0] << endl;
	//cout << "��ά�����һ��Ԫ�ص�ַΪ��" << (int)&arr[0][0] << endl;
	cout << "��ά����ڶ���Ԫ�ص�ַΪ��" << &arr[0][1] << endl;

	system("pause");

	return 0;
}