#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
int main() 
{
	//continue���:��������ѭ����������δִ�е���䣬����ִ����һ��ѭ��
	for (int i = 0; i < 100; i++)
	{
		if (i % 2 == 0)//ż�������
		{
			continue;
		}
		cout << i << endl;
	}

	system("pause");

	return 0;
}
//continue��û��ʹ����ѭ����ֹ����break������ѭ��