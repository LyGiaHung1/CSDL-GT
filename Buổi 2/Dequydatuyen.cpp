#include<stdio.h>
#include<iostream>
using namespace std;
int pow(int base, int exponent)
{
	if (exponent == 0)
		return 1;
	return base * pow(base, exponent - 1);
}
int main()
{
	int kq = pow(2,3);
	cout << kq;
}