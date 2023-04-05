//https://gochocit.com/ky-thuat-lap-trinh/thuat-toan-sap-xep-chen-truc-tiep-insertion-sort
#include<iostream>
#include<stdio.h>
#include<conio.h>
#define Max 100
using namespace std;
void Nhap(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap vao phan tu a[" << i << "] : ";
		cin >> a[i];
	}
}
void Xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
}
void Swap(int& a, int& b)
{
	int tam = a;
	a = b;
	b = tam;
}
void Chen(int a[], int n)
{
	for (int i = 0; i < n ; i++)
	{
		int x = a[i],pos = i - 1;
		while (pos >= 0 && x < a[pos])
		{
			a[pos + 1] = a[pos];
			--pos;
		}
		a[pos + 1] = x;
	}
}
int main()
{
	int a[Max];
	int n;
	cout << "Nhap vao n:";
	cin >> n;
	Nhap(a, n);
	Chen(a, n);
	Xuat(a, n);
	return 0;
}