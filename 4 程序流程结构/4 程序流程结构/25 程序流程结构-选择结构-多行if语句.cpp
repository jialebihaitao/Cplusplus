#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
int main()
{
	//选择结构-多行if语句
	//输入一个分数
	//如果分数大于600分，视为考上一本大学，并在屏幕上打印
	//如果分数低于600分，视为未考上一本大学，并在屏幕上打印

	//1.输入考试分数
	int score = 0;	
	cout << "请输入考试分数：" << endl;
	cin >> score;

    //2.提示用户输入的分数
	cout << "您输入的分数为:" << score << endl;

	//3.判断 如果分数大于600,打印我考上了一本大学
	//       如果分数小于600,打印我未考上了一本大学
	if (score > 600)//大于600分执行
	{
		cout << "我考上了一本大学" << endl;
	}
	else//不大于600分执行
	{
		cout << "我未考上一本大学" << endl;
	}

	system("pause");
	return 0;
}