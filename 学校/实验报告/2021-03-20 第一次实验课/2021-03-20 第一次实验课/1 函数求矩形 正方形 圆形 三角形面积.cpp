#define _CRT_SECURE_NO_WARNINGS
//1.用函数求矩形 正方形 圆形 三角形面积
#include<iostream>
using namespace std;
//矩形面积
int area1(int a, int b)
{
	return a*b;
}

//正方形面积
int area2(int c)
{
	return c*c;
}

//圆的面积
float area3(int r)
{
	float PI = 3.14;
	return PI*r*r;
}

//三角形面积
int area4(int d, int e, int f)
{
	int p = (d + e + f) / 2;
	int s = p*(p - d)*(p - e)*(p - f);
	return sqrt(s);
}

int main()
{
	//矩形面积
	int a = 0;
	int b = 0;
	cout << "请输入矩形的两条边a,b" << endl;
	cin >> a >> b;
	int rectangular=area1(a, b);
	cout << "矩形面积为:" << rectangular << endl;

	//正方形面积
	int c = 0;
	cout << "请输入正方形的边r" << endl;
	cin >> c;
	int square=area2(c);
	cout << "正方形面积为:" << square << endl;
	
	//圆的面积
	int r = 0;
	cout << "请输入圆的半径r" << endl;
	cin >> r;
	float circle=area3(r);
	cout << "圆形面积为" << circle << endl;

	//三角形面积
	int d = 0;
	int e = 0;
	int f = 0;
	cout << "请输入三角形三条边d,e,f" << endl;
	cin >> d >> e >> f;
	int triangle=area4(d, e, f);
	cout << "三角形面积为" << triangle << endl;

	system("pause");
	return 0;
}