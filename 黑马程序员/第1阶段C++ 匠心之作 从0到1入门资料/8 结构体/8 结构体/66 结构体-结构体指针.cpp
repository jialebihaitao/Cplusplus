#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<string>
using namespace std;

//�ṹ��ָ��
struct student
{
	//��Ա�б�
	string name;  //����
	int age;      //����
	int score;    //����
};

int main()
{
	//1.����ѧ���ṹ�����
	student s = { "����", 18, 100 };

	//2.ͨ��ָ��ָ��ṹ�����
	student* p = &s;

	//3.ͨ��ָ����ʽṹ������е�����
	  //���ò����� -> ����ͨ���ṹ��ָ����ʽṹ������
	cout << "����:" << p->name << " ����:" << p->age << " ����:" << p->score << endl;


	system("pause");
	return 0;
}