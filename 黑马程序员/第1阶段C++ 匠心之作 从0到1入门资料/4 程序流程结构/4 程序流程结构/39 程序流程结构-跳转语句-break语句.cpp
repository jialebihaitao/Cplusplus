#define _CRT_SECURE_NO_WARNINGS

////1、在switch 语句中使用break
//#include<iostream>
//using namespace std;
//int main() 
//{
//	//1、在switch 语句中使用break
//	cout << "请选择您挑战副本的难度：" << endl;
//	cout << "1、普通" << endl;
//	cout << "2、中等" << endl;
//	cout << "3、困难" << endl;
//
//	int num = 0;//创建选择结果的变量
//
//	cin >> num;//等待用户输入
//
//	switch (num)
//	{
//	case 1:
//		cout << "您选择的是普通难度" << endl;
//		break;//退出switch语句
//	case 2:
//		cout << "您选择的是中等难度" << endl;
//		break;
//	case 3:
//		cout << "您选择的是困难难度" << endl;
//		break;
//	default:
//		break;
//	}
//
//	system("pause");
//
//	return 0;
//}

//2、在循环语句中用break
//#include<iostream>
//using namespace std;
//int main() 
//{
//	
//	for (int i = 0; i < 10; i++)
//	{
//		if (i == 5)
//		{
//			break; //退出循环语句
//		}
//		cout << i << endl;//0 1  2 3 4
//	}
//
//	system("pause");
//
//	return 0;
//}

//3.在嵌套循环语句中使用break，退出内层循环
#include<iostream>
using namespace std;
int main() 
{	
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (j == 5)
			{
				break;//彻底退出内层循环
			}
			cout << "*" << " ";
		}
		cout << endl;
	}

	system("pause");

	return 0;
}