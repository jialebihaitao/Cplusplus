#define _CRT_SECURE_NO_WARNINGS
//��ϰ����2������Ԫ������
//
//����������������һ��5��Ԫ�ص����飬���ҽ�Ԫ������.
//
//��ԭ����Ԫ��Ϊ��1, 3, 2, 5, 4;
//���ú�������Ϊ:4, 5, 2, 3, 1;

#include<iostream>
using namespace std;
int main()
{
	//ʵ����������


	//1.��������

	int arr[5] = { 1, 3, 2, 5, 4 };
	cout << "��������ǰ" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << endl;
	}

	//2.ʵ������
	  //2.1 ��¼��ʼ�±�λ��
	  //2.2 ��¼�����±�λ��
	  //2.3 ��ʼ�±�������±��Ԫ�ػ���
	  //2.4 ��ʼλ��++ ����λ��--
	  //2.5 ѭ��ִ��2.1����,ֱ����ʼλ��>=����λ��

	int start = 0;//��ʼԪ���±�λ��
	int end = (sizeof(arr) / sizeof(arr[0])) - 1;//ĩβԪ���±���Ҫ-1
	int t = arr[start];//������ʱ�ڴ�
	while (start < end)
	{
		//ʵ��Ԫ�ػ���
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;

		//�±����
		start++;
		end--;
	}

	//3.��ӡ���ú������
	cout << "����Ԫ�����ú�:" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << endl;
	}

	system("pause");
	return 0;
}