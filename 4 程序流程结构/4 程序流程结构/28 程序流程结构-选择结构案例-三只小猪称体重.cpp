#define _CRT_SECURE_NO_WARNINGS
//��ϰ��������ֻС�������
//����ֻС��ABC����ֱ�������ֻС������أ������ж���ֻС�����أ�
//1.���ж�A��B˭��
  //A��:��A��C�Ƚ�,��A��,�����A����;��C��,�����C��
  //B��:��B��C�Ƚ�,��B��,�����B����;��C��,�����C��
        
#include<iostream>
using namespace std;
int main()
{
	//1.������ֻС�������
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;

	//2.���û�������ֻС������
	cout << "������С��A������" << endl;
	cin >> num1;
	cout << "������С��B������" << endl;
	cin >> num2;
	cout << "������С��C������" << endl;
	cin >> num3;
	cout << "С��A������Ϊ" << num1 << endl;
	cout << "С��B������Ϊ" << num2 << endl;
	cout << "С��C������Ϊ" << num3 << endl;

	//3.�ж���ֻ����
	  //���ж�A��B������
	if (num1 > num2)//A��B��
	{
		if (num1 > num3)//A��C��
		{
			cout << "С��A����" << endl;
		}
		else//C��A��
		{
			cout << "С��C����" << endl;
		}
	}
	else//B��A��
	{
		if (num2 > num3)//B��C��
		{
			cout << "С��B����" << endl;
		}
		else//C��B��
		{
			cout << "С��C����" << endl;
		}
	}

	system("pause");
	return 0;
}
