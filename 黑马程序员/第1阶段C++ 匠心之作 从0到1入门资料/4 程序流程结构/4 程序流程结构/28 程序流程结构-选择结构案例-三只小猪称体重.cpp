#define _CRT_SECURE_NO_WARNINGS
//练习案例：三只小猪称体重
//有三只小猪ABC，请分别输入三只小猪的体重，并且判断哪只小猪最重？
//1.先判断A和B谁重
  //A重:让A和C比较,若A重,结果是A最重;若C重,结果是C重
  //B重:让B和C比较,若B重,结果是B最重;若C重,结果是C重
        
#include<iostream>
using namespace std;
int main()
{
	//1.创建三只小猪的体重
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;

	//2.让用户输入三只小猪重量
	cout << "请输入小猪A的重量" << endl;
	cin >> num1;
	cout << "请输入小猪B的重量" << endl;
	cin >> num2;
	cout << "请输入小猪C的重量" << endl;
	cin >> num3;
	cout << "小猪A的体重为" << num1 << endl;
	cout << "小猪B的体重为" << num2 << endl;
	cout << "小猪C的体重为" << num3 << endl;

	//3.判断哪只最重
	  //先判断A与B的重量
	if (num1 > num2)//A比B重
	{
		if (num1 > num3)//A比C重
		{
			cout << "小猪A最重" << endl;
		}
		else//C比A重
		{
			cout << "小猪C最重" << endl;
		}
	}
	else//B比A重
	{
		if (num2 > num3)//B比C重
		{
			cout << "小猪B最重" << endl;
		}
		else//C比B重
		{
			cout << "小猪C最重" << endl;
		}
	}

	system("pause");
	return 0;
}
