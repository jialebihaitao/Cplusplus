#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

int main()
{
	//指针和数组
	//利用指针访问数组中元素

	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	int * p = arr;  //arr就是数组首地址

	cout << "第一个元素： " << arr[0] << endl;
	cout << "指针访问第一个元素： " << *p << endl;

	cout << "利用指针偏移数组" << endl;
	for (int i = 0; i < 10; i++)
	{
		//利用指针遍历数组
		cout << *p << endl;
		p++;//让指针向后偏移四个字节
	}
	system("pause");
	return 0;
}