#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
int main() 
{

	//二维数组数组名用途
	  //查看二维数组所占内存空间
	  //获取二维数组首地址
	int arr[2][3] =
	{
		{ 1, 2, 3 },
		{ 4, 5, 6 }
	};

	//1.可以查看占用空间内存大小
	cout << "二维数组占用内存空间为： " << sizeof(arr) << endl;
	cout << "二维数组第一行占用内存为： " << sizeof(arr[0]) << endl;
	cout << "二维数组第一个元素占用内存为： " << sizeof(arr[0][0]) << endl;

	cout << "二维数组行数： " << sizeof(arr) / sizeof(arr[0]) << endl;
	//二维数组行数=二维数组占用内存空间/二维数组第一行占用内存

	cout << "二维数组列数： " << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;
	//二维数组列数=二维数组第一行占用内存/二维数组第一个元素占用内存

	//2.可以查看二维数组的首地址
	cout << "二维数组首地址为：" << arr << endl;
	cout << "二维数组第一行地址为：" << arr[0] << endl;
	cout << "二维数组第二行地址为：" << arr[1] << endl;

	cout << "二维数组第一个元素地址为：" << &arr[0][0] << endl;
	//cout << "二维数组第一个元素地址为：" << (int)&arr[0][0] << endl;
	cout << "二维数组第二个元素地址为：" << &arr[0][1] << endl;

	system("pause");

	return 0;
}