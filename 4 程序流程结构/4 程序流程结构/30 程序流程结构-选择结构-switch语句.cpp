#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
int main() 
{
	//switch���
	//�����Ӱ���� 
	//10 ~ 9   ����   
	// 8 ~ 7   �ǳ���
	// 6 ~ 5   һ��
	// 5������ ��Ƭ

	//1.��ʾ�û�����Ӱ����
	int score = 0;
	cout << "�����Ӱ���" << endl;

	//2.�û���ʼ���д��
	cin >> score;
	cout << "����ķ���Ϊ" << score << endl;
	switch (score)
	{
	case 10:
	case 9:
		cout << "����" << endl;
		break;//�˳���ǰ��֧
	case 8:		
	case 7:
		cout << "�ǳ���" << endl;
		break;
	case 6:
	case 5:
		cout << "һ��" << endl;
		break;
	default:
		cout << "��Ƭ" << endl;
		break;
	}

	system("pause");

	return 0;
}
//if��switch����
//switchȱ��:�ж�ʱ��ֻ�������λ����ַ���,��������һ������
//switch�ŵ�:�ṹ����,ִ��Ч�ʸ�