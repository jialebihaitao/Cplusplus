#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;
int main()
{
	//1.整型输入
	/*int a = 0;
	cout << "请给整型变量a赋值：" << endl;
	cin >> a;
	cout <<" 整型变量a= "<< a << endl;*/

	//2.浮点型输入
	/*float f = 3.14f;
	cout << "请给浮点型变量a赋值：" << endl;
	cin >> f;
	cout << "浮点型变量f=" << f << endl;*/

	//3.字符型输入
	/*char ch = 'a';
	cout << "请给字符型变量ch赋值：" << endl;
	cin >> ch;
	cout << "字符型变量ch=" << ch <<endl;*/

	//4.字符串型输入
	/*string str="Hello";
	cout << "请给字符串型变量str赋值：" << endl;
	cin >> str;
	cout << "字符串str=" << str <<endl;*/

	//5.布尔类型输入
	bool flag = true;
	cout << "请给布尔型变量flag赋值：" << endl;
	cin >> flag;//bool类型 非0为真
	cout << "布尔类型flag=" << flag << endl;
	system("pause");
	return 0;

}