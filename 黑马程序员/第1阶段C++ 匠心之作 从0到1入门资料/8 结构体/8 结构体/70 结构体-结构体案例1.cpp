#define _CRT_SECURE_NO_WARNINGS
//����������

//ѧУ������������Ŀ��ÿ����ʦ����5��ѧ�����ܹ���3����ʦ����������
//���ѧ������ʦ�Ľṹ�壬��������ʦ�Ľṹ���У�����ʦ������һ�����5��ѧ����������Ϊ��Ա
//ѧ���ĳ�Ա�����������Է���������������3����ʦ��ͨ��������ÿ����ʦ��������ѧ����ֵ
//���մ�ӡ����ʦ�����Լ���ʦ������ѧ�����ݡ�

#include<iostream>
using namespace std;
#include<string>
#include<ctime>
//ѧ���Ľṹ��
struct Student
{
	//����
	string sName;
	//����
	int score;
};

//��ʦ�Ľṹ�嶨��
struct Teacher
{
	//����
	string tName;
	//ѧ������
	struct Student sArray[5];
};

//����ʦ��ѧ����ֵ�ĺ���
void allocateSpace(struct Teacher tArray[],int len)
{
	string nameSeed = "ABCDE";
	//����ʦ��ʼ��ֵ
	for (int i = 0; i < len; i++)
	{
		tArray[i].tName = "Teacher_";
		tArray[i].tName += nameSeed[i];

		//ͨ��ѭ����ÿ����ʦ������ѧ����ֵ
		for (int j = 0; j < 5; j++)
		{
			tArray[i].sArray[j].sName = "Student_";
			tArray[i].sArray[j].sName += nameSeed[j];

			int random = rand() % 61 + 40;
			//rand()%60  0~59
			//rand()%60+40 40~99
			//rand()%61  0~60
			//rand()%61+40  40~100

			tArray[i].sArray[j].score = random;
		}
	}
}

//��ӡ������Ϣ
void printInfo(struct Teacher tArray[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "��ʦ����:" << tArray[i].tName << endl;
		for (int j = 0; j < 5; j++)
		{
			cout << "\tѧ������:" << tArray[i].sArray[j].sName << " ���Է���:" << tArray[i].sArray[j].score << endl;
		}
	}
}
int main()
{
	srand((unsigned int)time(NULL)); 
	//��������� ͷ�ļ� #include <ctime>
	//1.����������ʦ������
	struct Teacher tArray[3];

	//2.ͨ��������������ʦ����Ϣ��ֵ,������ʦ����ѧ����Ϣ��ֵ
	int len = sizeof(tArray) / sizeof(tArray[0]);
	allocateSpace(tArray, len);
	//3.��ӡ������ʦ��������ѧ����Ϣ
	printInfo(tArray, len);

	system("pause");
	return 0;
}