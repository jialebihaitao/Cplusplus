#define _CRT_SECURE_NO_WARNINGS
//����*����=������
//����<=��ǰ����
#include<iostream>
using namespace std;
int main()
{
	//�˷��ھ���
	for (int i = 1; i <= 9; i++)
	{
		for (int j = 1; j <= i; j++)//����<=��ǰ����
		{
			cout << j << "*" << i << "=" << j*i<<"  ";
		}
		cout << "\n";
	}
	system("pause");
	return 0;
}