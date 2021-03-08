#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
int area(int x, int y)
{
	return x*y;
}
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d%d", &a, &b);
	int c = area(a, b);
	printf("area=%d\n", c);
	system("pause");
	return 0;
}