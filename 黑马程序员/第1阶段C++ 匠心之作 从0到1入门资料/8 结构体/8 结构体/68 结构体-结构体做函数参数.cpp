#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<string>
using namespace std;


struct student
{
	//��Ա�б�
	string name;  //����
	int age;      //����
	int score;    //����
};

//��ӡѧ����Ϣ����
//1.ֵ����:
void printStudent1(struct student s)
{
	s.age = 100;
	cout << "�Ӻ����� ������" << s.name << " ���䣺 " << s.age << " ������" << s.score << endl;
}

//2.��ַ����
void printStudent2(struct student *p)
{
	p->age = 200;
	cout << "�Ӻ����� ������" << p->name << " ���䣺 " << p->age << " ������" << p->score << endl;
}
int main()
{
	//�ṹ������������

	//��ѧ�����뵽һ��������,��ӡѧ�����ϵ�������Ϣ

	//�����ṹ�����
	struct student s;
	s.name = "����";
	s.age = 20;
	s.score = 85;

	cout << "�������� ������" << s.name << " ���䣺 " << s.age << " ������" << s.score << endl;
	printStudent1(s);
	printStudent2(&s);
	system("pause");
	return 0;
}
//��������޸��������е����ݣ���ֵ���ݣ���֮�õ�ַ����

