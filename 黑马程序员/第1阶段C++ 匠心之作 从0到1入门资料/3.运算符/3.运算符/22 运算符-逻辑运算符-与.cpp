#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
//�߼������  --- ��   ͬ��Ϊ��
int main() {

	int a = 10;
	int b = 10;
	//ͬ��Ϊ��
	cout << (a && b) << endl;// 1

	a = 10;
	b = 0;
	//һ��Ϊ��
	cout << (a && b) << endl;// 0 

	a = 0;
	b = 0;
	//ͬ��Ϊ��
	cout << (a && b) << endl;// 0

	system("pause");

	return 0;
}