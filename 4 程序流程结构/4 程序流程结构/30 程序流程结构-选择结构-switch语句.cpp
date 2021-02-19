#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
int main() 
{
	//switch语句
	//请给电影评分 
	//10 ~ 9   经典   
	// 8 ~ 7   非常好
	// 6 ~ 5   一般
	// 5分以下 烂片

	//1.提示用户给电影评分
	int score = 0;
	cout << "请给电影打分" << endl;

	//2.用户开始进行打分
	cin >> score;
	cout << "您打的分数为" << score << endl;
	switch (score)
	{
	case 10:
	case 9:
		cout << "经典" << endl;
		break;//退出当前分支
	case 8:		
	case 7:
		cout << "非常好" << endl;
		break;
	case 6:
	case 5:
		cout << "一般" << endl;
		break;
	default:
		cout << "烂片" << endl;
		break;
	}

	system("pause");

	return 0;
}
//if和switch区别
//switch缺点:判断时候只能是整形或者字符型,不可以是一个区间
//switch优点:结构清晰,执行效率高