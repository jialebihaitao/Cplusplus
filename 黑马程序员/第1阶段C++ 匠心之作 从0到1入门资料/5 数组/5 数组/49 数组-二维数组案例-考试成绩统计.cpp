#define _CRT_SECURE_NO_WARNINGS
//考试成绩统计
//
//案例描述：有三名同学（张三，李四，王五），在一次考试中的成绩分别如下表，**请分别输出三名同学的总成绩**
//
//       | 语文 | 数学 | 英语 |
//| 张三 | 100  | 100  | 100  |
//| 李四 | 90   | 50   | 100  |
//| 王五 | 60   | 70   | 80   |

#include<iostream>
using namespace std;
#include<string>
int main()
{
	//1.创建二维数组,3行3列
	int score[3][3]=
	{
		{100,100,100},
		{90,50,100},
		{60,70,80}
	};

	string names[3] = { "张三", "李四", "王五" };

	//2.统计考试成绩:让每行的三列相加,统计出总和
	for (int i = 0; i < 3; i++)
	{
		int sum = 0;//统计分数总和的变量
		
		for (int j = 0; j < 3; j++)
		{
			cout << score[i][j] << " " ;
			sum += score[i][j];
		}
		cout<< "\n" << names[i] << "的总分为:" << sum << endl;
	}
	system("pause");
	return 0;
}