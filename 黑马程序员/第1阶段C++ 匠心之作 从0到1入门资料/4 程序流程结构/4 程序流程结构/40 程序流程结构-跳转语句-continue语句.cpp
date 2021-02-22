#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
int main() 
{
	//continue语句:跳过本次循环中余下尚未执行的语句，继续执行下一次循环
	for (int i = 0; i < 100; i++)
	{
		if (i % 2 == 0)//偶数不输出
		{
			continue;
		}
		cout << i << endl;
	}

	system("pause");

	return 0;
}
//continue并没有使整个循环终止，而break会跳出循环