#define _CRT_SECURE_NO_WARNINGS
//���Գɼ�ͳ��
//
//����������������ͬѧ�����������ģ����壩����һ�ο����еĳɼ��ֱ����±�**��ֱ��������ͬѧ���ܳɼ�**
//
//       | ���� | ��ѧ | Ӣ�� |
//| ���� | 100  | 100  | 100  |
//| ���� | 90   | 50   | 100  |
//| ���� | 60   | 70   | 80   |

#include<iostream>
using namespace std;
#include<string>
int main()
{
	//1.������ά����,3��3��
	int score[3][3]=
	{
		{100,100,100},
		{90,50,100},
		{60,70,80}
	};

	string names[3] = { "����", "����", "����" };

	//2.ͳ�ƿ��Գɼ�:��ÿ�е��������,ͳ�Ƴ��ܺ�
	for (int i = 0; i < 3; i++)
	{
		int sum = 0;//ͳ�Ʒ����ܺ͵ı���
		
		for (int j = 0; j < 3; j++)
		{
			cout << score[i][j] << " " ;
			sum += score[i][j];
		}
		cout<< "\n" << names[i] << "���ܷ�Ϊ:" << sum << endl;
	}
	system("pause");
	return 0;
}