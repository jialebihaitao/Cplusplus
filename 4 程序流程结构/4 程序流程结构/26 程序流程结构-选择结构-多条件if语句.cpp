#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
int main() 
{
    //ѡ��ṹ ������if���//����һ�����Է���
	//����һ�����Է���
	

	//1.�û��������
	int score = 0;
	cout << "�����뿼�Է�����" << endl;
	cin >> score;

	//2.��ʾ�û�����ķ���
	cout << "������Ŀ��Է���Ϊ:" << score << endl;

	//3.�ж�
	//�������600,����Ϊ����һ����ѧ,��Ļ���
	//�������500,����Ϊ���϶�����ѧ,��Ļ���
	//�������400,����Ϊ����������ѧ,��Ļ���
	//���С�ڵ���400,����Ϊδ���ϴ�ѧ,��Ļ���
	if (score > 600)
	{
		cout << "�ҿ�����һ����ѧ" << endl;
	}
	else if (score > 500)
	{
		cout << "�ҿ����˶�����ѧ" << endl;
	}
	else if (score > 400)
	{
		cout << "�ҿ�����������ѧ" << endl;
	}
	else
	{
		cout << "��δ���ϱ���" << endl;
	}

	system("pause");

	return 0;
}