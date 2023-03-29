#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;
long tinhYn(int);
long tinhXn(int);
long tinhXn(int n)
{
	if (n == 0)
		return 1;
	return tinhXn(n - 1) + tinhYn(n - 1);
}
long tinhYn(int n)
{
	if (n == 0)
		return 0;
	return 3 * tinhXn(n - 1) + 2 * tinhYn(n - 1);
}
int main()
{
	int n;
	do
	{
		cout << "Nhap n:";
		cin >> n;
	} while (n < 0);
	long kq1 = tinhXn(n);
	long kq2 = tinhYn(n);
	cout << "X(n)=" << kq1 << endl;
	cout << "Y(n)=" << kq2 << endl;
	return 0;
}