#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<string>
using namespace std;

//constʹ�ó���
struct student
{
	//��Ա�б�
	string name;  //����
	int age;      //����
	int score;    //����
};

//constʹ�ó���
//�������е��βθ�Ϊָ��,���Լ����ڴ�ռ�,���Ҳ��Ḵ��һ���µĸ�������
void printStudent(const student *s) //��const��ֹ�������е������
{
	//s->age = 100; //����ʧ�ܣ���Ϊ����const����
	cout << "������" << s->name << " ���䣺" << s->age << " ������" << s->score << endl;

}
int main()
{
	student s = { "����", 15, 70 };

	printStudent(&s);

	cout << "main����������Ϊ: " << s.age << endl;
	system("pause");
	return 0;
}