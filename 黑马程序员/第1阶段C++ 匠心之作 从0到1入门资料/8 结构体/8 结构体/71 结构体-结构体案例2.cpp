#define _CRT_SECURE_NO_WARNINGS
//����������
//���һ��Ӣ�۵Ľṹ�壬������Ա���������䣬�Ա�; �����ṹ�����飬�����д��5��Ӣ�ۡ�
//ͨ��ð��������㷨���������е�Ӣ�۰���������������������մ�ӡ�����Ľ����
//����Ӣ����Ϣ���£�
//{"����", 23, "��"},
//{ "����", 22, "��" },
//{ "�ŷ�", 20, "��" },
//{ "����", 21, "��" },
//{ "����", 19, "Ů" },
#include<iostream>
using namespace std;
#include<string>

//1.���Ӣ�۽ṹ��
struct Hero
{
	//����
	string name;
	//����
	int age;
	//�Ա�
	string sex;
};

//ð������ ʵ��������������
void bubbleSort(struct Hero heroArray[], int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - 1 - i; j++)
		{
			//���j�±������ ���� j+1�±�Ԫ�ص�����,��������Ԫ��
			if (heroArray[j].age>heroArray[j + 1].age)
			{
				struct Hero t = heroArray[j];
				heroArray[j] = heroArray[j + 1];
				heroArray[j + 1] = t;
			}
		}
	}
}

//��ӡ����������е�Ԫ��
void printHero(struct Hero heroArray[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "����:" << heroArray[i].name << "����:" << heroArray[i].age << "�Ա�" << heroArray[i].sex << endl;

	}
}
int main()
{
	//2.����������5��Ӣ��
	struct Hero heroArray[5] =
	{
		{ "����", 23, "��" },
		{ "����", 22, "��" },
		{ "�ŷ�", 20, "��" },
		{ "����", 21, "��" },
		{ "����", 19, "Ů" },
	};
	int len = sizeof(heroArray) / sizeof(heroArray[0]);
	cout << "��ӡǰ����:" << endl;
	for (int i = 0; i < len; i++)
	{
		cout << "����:" << heroArray[i].name << "����:" << heroArray[i].age << "�Ա�" << heroArray[i].sex << endl;
	}
	//3.�������������,�������������������
	bubbleSort(heroArray, len);

	//4.�������Ľ����ӡ���
	cout << "�������:" << endl;
	printHero(heroArray,len);
	system("pause");
	return 0;
}