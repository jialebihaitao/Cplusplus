#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

int main()
{
	//        1.���ڸ�ָ��������г�ʼ��
	//��ָ��
	//        2.��ָ���ǲ����Խ��з��ʵ�

	//ָ�����pָ���ڴ��ַ���Ϊ0�Ŀռ�
	int * p = NULL;

	//���ʿ�ָ�뱨�� 
	//*p=100;��
	//�ڴ���0 ~255Ϊϵͳռ���ڴ棬�������û�����
	cout << *p << endl;
	system("pause");
	return 0;
}