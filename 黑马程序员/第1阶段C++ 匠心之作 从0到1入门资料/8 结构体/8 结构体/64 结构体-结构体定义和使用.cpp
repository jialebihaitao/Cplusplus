#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<string>
using namespace std;

//1.����ѧ����������:ѧ������(���� ���� ����)
//�Զ�����������,һЩ���ͼ�����ɵ�һ������
//�﷨ struct ��������{ ��Ա�б� }

//�˴�struct �ؼ��ֲ�����ʡ��
struct Student
{
	//��Ա�б�

	string name;  //����
	int age;      //����
	int score;    //����
};/*stu3;*/ //˳�㴴���ṹ�����-������ʽ3 


int main()
{
	//2.ͨ��ѧ�����ʹ�������ѧ��

	//2.1 struct Student s1
	struct Student  s1; //struct �ؼ��ֿ���ʡ��
	//��s1���Ը�ֵ:ͨ�� . ���ʽṹ������е�����
	s1.name = "����";
	s1.age = 18;
	s1.score = 100;

	cout << "����:" << s1.name << " ����:" << s1.age << " ����:" << s1.score << endl;

	//2.2 struct Student s2={ , , ,}
	struct Student s2 = { "����", 19, 80 };
	cout << "����:" << s2.name << " ����:" << s2.age << " ����:" << s2.score << endl;

	//2.3 �ڶ���ṹ��ʱ˳�㴴���ṹ�����
	stu3.name = "����";
	stu3.age = 20;
	stu3.score = 60;
	cout << "����:" << stu3.name << " ����:" << stu3.age << " ����:" << stu3.score << endl;

	system("pause");
	return 0;
}

//�ܽ�1������ṹ��ʱ�Ĺؼ�����struct������ʡ��
//�ܽ�2�������ṹ�����ʱ���ؼ���struct����ʡ��
//�ܽ�3���ṹ��������ò����� .  ���ʳ�Ա