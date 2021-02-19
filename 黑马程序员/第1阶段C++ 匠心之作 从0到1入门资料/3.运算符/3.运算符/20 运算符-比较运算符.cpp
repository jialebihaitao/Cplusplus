#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
int main()
{
	//0Îª¼Ù   1ÎªÕæ
	int a = 10;
	int b = 20;
	//==
	cout << (a == b) << endl; // 0 
	//!=
	cout << (a != b) << endl; // 1
	//>
	cout << (a > b) << endl; // 0
	//<
	cout << (a < b) << endl; // 1
	//>=
	cout << (a >= b) << endl; // 0
	//<=
	cout << (a <= b) << endl; // 1

	system("pause");

	return 0;
}