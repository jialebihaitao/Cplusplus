#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
using namespace std;

void swap(int &m, int &n)
{
	int t = 0;
	t = m;
	m = n;
	n = t;
}
int main()
{
	int m = 0;
	int n = 0;
	cin >> m >> n;
	cout << "before:" << m << ' ' << n << endl;
	swap(m, n);
	cout << "after:" << m << ' ' << n << endl;
	system("pause");
	return 0;
}