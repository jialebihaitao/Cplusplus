#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<string>
using namespace std;

//�ṹ������

//1.����ṹ��
struct student
{
	//��Ա�б�
	string name;  //����
	int age;      //����
	int score;    //����
};

int main()
{
	//2.�����ṹ������
	struct student arr[3] =
	{
		{ "����", 18, 100 },
		{ "����", 28, 99 },
		{ "����", 38, 66 }
	};
    //3.���ṹ�������е�Ԫ�ظ�ֵ
	arr[2].name = "����";
	arr[2].age = 80;
	arr[2].score = 60;

	//4.�����ṹ������
	for (int i = 0; i < 3; i++)
	{
		cout << "������" << arr[i].name << " ���䣺" << arr[i].age << " ������" << arr[i].score << endl;
	}
	system("pause");
	return 0;
}