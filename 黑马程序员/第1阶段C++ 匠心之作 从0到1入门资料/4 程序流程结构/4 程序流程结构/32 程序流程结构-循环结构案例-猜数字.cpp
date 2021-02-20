#define _CRT_SECURE_NO_WARNINGS
//案例描述：
//系统随机生成一个1到100之间的数字，
//玩家进行猜测，
//如果猜错，提示玩家数字过大或过小，
//如果猜对恭喜玩家胜利，并且退出游戏。

#include<iostream>
//time系统时间头文件包含
#include<ctime>
using namespace std;
int main()
{
	//添加随机数的种子:利用当前系统时间生成随机数,防止每次随机数都一样
	srand((unsigned int)time(NULL));
	//1.系统生成随机数
	int num=rand() % 100 + 1;   //rand()%100   生成0~99随机数+1->生成1~100随机数

	//2.玩家进行猜测
	int val = 0;//玩家输入的数据
	while (1)
	{
		cin >> val;
		//3.判断玩家猜测
		//猜对   退出游戏
		//猜错   提示猜的结果大还是小 重新返回第二步

		if (val > num)
		{
			cout << "猜测过大" << endl;
		}
		else if (val < num)
		{
			cout << "猜测过小" << endl;
		}
		else
		{
			cout << "猜对了" << endl;
			break;//break可退出当前循环
		}
	}
	system("pause");
	return 0;
}