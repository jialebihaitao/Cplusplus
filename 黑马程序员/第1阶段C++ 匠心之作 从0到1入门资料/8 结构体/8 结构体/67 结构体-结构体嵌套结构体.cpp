#define _CRT_SECURE_NO_WARNINGS
//���磺ÿ����ʦ����һ��ѧԱ��һ����ʦ�Ľṹ���У���¼һ��ѧ���Ľṹ��
#include<iostream>
#include<string>
using namespace std;

//ѧ���ṹ�嶨��
struct student
{
	//��Ա�б�
	string name;  //����
	int age;      //����
	int score;    //����
};

//��ʦ�ṹ�嶨��
struct teacher
{
	//��Ա�б�
	int id; //ְ�����
	string name;  //��ʦ����
	int age;   //��ʦ����
	struct student stu; //�ӽṹ�� ѧ��
};

int main()
{
	//�ṹ��Ƕ�׽ṹ��
	//������ʦ
	teacher t;
	t.id = 10000;
	t.age = 50;
	t.stu.name = "С��";
	t.stu.age = 20;
	t.stu.score = 60;

	cout << "��ʦ ְ����ţ� " << t.id << " ������ " << t.name << " ���䣺 " << t.age << endl;

	cout << "����ѧԱ ������ " << t.stu.name << " ���䣺" << t.stu.age << " ���Է����� " << t.stu.score << endl;

	system("pause");
	return 0;
}