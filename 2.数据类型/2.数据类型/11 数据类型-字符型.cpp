#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
int main()
{
	//1.�ַ��ͱ���������ʽ
	char ch = 'a';
	cout << ch << endl;

	//2.�ַ��ͱ�����ռ�ڴ��С
	cout << sizeof(char) << endl;

	//3.�ַ��ͱ�����������
	//ch = "a"; //���󣬲�������˫����
	//ch = 'abcde'; //���󣬵�������ֻ������һ���ַ�

	//4.�ַ��ͱ�����ӦASCII����
	//a-97   A-65
	cout << (int)ch << endl;  //�鿴�ַ�a��Ӧ��ASCII��
	ch = 97; //����ֱ����ASCII���ַ��ͱ�����ֵ
	cout << ch << endl;
	system("pause");
	return 0;
}