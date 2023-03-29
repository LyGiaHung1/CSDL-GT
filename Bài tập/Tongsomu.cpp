#include<iostream>
#include<stdio.h>
using namespace std;
double Tong(float x, int n)
{
	if (n == 0)
		return 0;
	if (n == 1)
		return x;
	return (1 +x/n) * Tong(x, n - 1) - (x/n) * Tong(x,n - 2);
}
int main() 
{	
	float x;
	int n;
	cout << "Nhap vao x:";
	cin >> x;
	cout << "Nhap vao n:";
	cin >> n;
	double kq=Tong(x, n);
	cout << kq;
	return 0;
}