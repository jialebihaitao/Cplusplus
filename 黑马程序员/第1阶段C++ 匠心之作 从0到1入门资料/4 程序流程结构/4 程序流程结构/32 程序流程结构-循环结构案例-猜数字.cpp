#define _CRT_SECURE_NO_WARNINGS
//����������
//ϵͳ�������һ��1��100֮������֣�
//��ҽ��в²⣬
//����´���ʾ������ֹ�����С��
//����¶Թ�ϲ���ʤ���������˳���Ϸ��

#include<iostream>
//timeϵͳʱ��ͷ�ļ�����
#include<ctime>
using namespace std;
int main()
{
	//��������������:���õ�ǰϵͳʱ�����������,��ֹÿ���������һ��
	srand((unsigned int)time(NULL));
	//1.ϵͳ���������
	int num=rand() % 100 + 1;   //rand()%100   ����0~99�����+1->����1~100�����

	//2.��ҽ��в²�
	int val = 0;//������������
	while (1)
	{
		cin >> val;
		//3.�ж���Ҳ²�
		//�¶�   �˳���Ϸ
		//�´�   ��ʾ�µĽ������С ���·��صڶ���

		if (val > num)
		{
			cout << "�²����" << endl;
		}
		else if (val < num)
		{
			cout << "�²��С" << endl;
		}
		else
		{
			cout << "�¶���" << endl;
			break;//break���˳���ǰѭ��
		}
	}
	system("pause");
	return 0;
}