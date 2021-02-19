#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
int main() 
{
    //选择结构 多条件if语句//输入一个考试分数
	//输入一个考试分数
	

	//1.用户输入分数
	int score = 0;
	cout << "请输入考试分数：" << endl;
	cin >> score;

	//2.提示用户输入的分数
	cout << "您输入的考试分数为:" << score << endl;

	//3.判断
	//如果大于600,则视为考上一本大学,屏幕输出
	//如果大于500,则视为考上二本大学,屏幕输出
	//如果大于400,则视为考上三本大学,屏幕输出
	//如果小于等于400,则视为未考上大学,屏幕输出
	if (score > 600)
	{
		cout << "我考上了一本大学" << endl;
	}
	else if (score > 500)
	{
		cout << "我考上了二本大学" << endl;
	}
	else if (score > 400)
	{
		cout << "我考上了三本大学" << endl;
	}
	else
	{
		cout << "我未考上本科" << endl;
	}

	system("pause");

	return 0;
}