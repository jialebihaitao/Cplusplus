#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
int main() 
{

	//��������;
	//1������ͳ�������������ڴ��еĳ���
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	cout << "����������ռ�ڴ�ռ�Ϊ�� " << sizeof(arr) << endl;//sizeof(arr)
	cout << "ÿ��Ԫ����ռ�ڴ�ռ�Ϊ�� " << sizeof(arr[0]) << endl;//sizeof(arr[i])
	cout << "�����Ԫ�ظ���Ϊ�� " << sizeof(arr) / sizeof(arr[0]) << endl;//sizeof(arr) / sizeof(arr[0])

	//2������ͨ����������ȡ�������׵�ַ
	cout << "�����׵�ַΪ�� " << arr << endl;//ʮ������
	cout << "�����׵�ַΪ�� " << (int) arr << endl;//ʮ����

	cout << "�����е�һ��Ԫ�ص�ַΪ�� " << &arr[0] << endl;//ʮ������
	cout << "�����е�һ��Ԫ�ص�ַΪ�� " << (int)&arr[0] << endl;//ʮ����

	cout << "�����еڶ���Ԫ�ص�ַΪ�� " << &arr[1] << endl;//ʮ������
	cout << "�����еڶ���Ԫ�ص�ַΪ�� " << (int)&arr[1] << endl;//ʮ����

	//arr = 100; �����������ǳ�������˲����Ը�ֵ


	system("pause");

	return 0;
}