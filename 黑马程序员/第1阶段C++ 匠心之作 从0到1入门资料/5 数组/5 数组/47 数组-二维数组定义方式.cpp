#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
int main() 
{

	//方式1  
	//数组类型 数组名 [行数][列数]
	int arr1[2][3];
	arr1[0][0] = 1;
	arr1[0][1] = 2;
	arr1[0][2] = 3;
	arr1[1][0] = 4;
	arr1[1][1] = 5;
	arr1[1][2] = 6;
	cout << "arr1" << endl;
	//外层循环打印行数
	for (int i = 0; i < 2; i++)
	{
		//内层循环打印列数
		for (int j = 0; j < 3; j++)
		{
			cout << arr1[i][j] << " ";
		}
		cout << endl;
	}

	//方式2 
	//数据类型 数组名[行数][列数] = { {数据1，数据2 } ，{数据3，数据4 } };
	int arr2[2][3] =
	{
		{ 1, 2, 3 },
		{ 4, 5, 6 }
	};
	cout << "arr2" << endl;
	//外层循环打印行数
	for (int i = 0; i < 2; i++)
	{
		//内层循环打印列数
		for (int j = 0; j < 3; j++)
		{
			cout << arr2[i][j] << " ";
		}
		cout << endl;
	}

	//方式3
	//数据类型 数组名[行数][列数] = { 数据1，数据2 ,数据3，数据4  };
	int arr3[2][3] = { 1, 2, 3, 4, 5, 6 };
	cout << "arr3" << endl;
	//外层循环打印行数
	for (int i = 0; i < 2; i++)
	{
		//内层循环打印列数
		for (int j = 0; j < 3; j++)
		{
			cout << arr3[i][j] << " ";
		}
		cout << endl;
	}

	//方式4 在定义二维数组时，如果初始化了数据，可以省略行数
	//数据类型 数组名[][列数] = { 数据1，数据2 ,数据3，数据4  };
	int arr4[][3] = { 1, 2, 3, 4, 5, 6 };
	cout << "arr4" << endl;
	//外层循环打印行数
	for (int i = 0; i < 2; i++)
	{
		//内层循环打印列数
		for (int j = 0; j < 3; j++)
		{
			cout << arr4[i][j] << " ";
		}
		cout << endl;
	}

	system("pause");

	return 0;
}