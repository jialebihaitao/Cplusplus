#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include"swap.h"
using namespace std;

void swap(int a, int b)
{
	int t = a;
	a = b;
	b = t;

	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
}