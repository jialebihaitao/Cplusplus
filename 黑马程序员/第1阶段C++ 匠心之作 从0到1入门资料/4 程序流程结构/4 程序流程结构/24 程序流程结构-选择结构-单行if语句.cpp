#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
int main() 
{

	//ѡ��ṹ-����if���
	//����һ�������������������600�֣���Ϊ����һ����ѧ��������Ļ�ϴ�ӡ

	//1.�û��������
	int score = 0;
	cout << "������һ��������" << endl;
	cin >> score;

	//2.��ӡ�û�����ķ���
	cout << "������ķ���Ϊ:" << score << endl;

	//3.�жϷ����Ƿ����600,�������,��ô���
	
	if (score > 600)
	{
		cout << "�ҿ�����һ����ѧ������" << endl;
	}

	//if���ע�������if�ж������棬��Ҫ�ӷֺ�

	system("pause");

	return 0;
}