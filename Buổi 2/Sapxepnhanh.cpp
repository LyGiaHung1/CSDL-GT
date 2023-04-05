//https://blog.luyencode.net/thuat-toan-sap-xep-quick-sort/
#include<stdio.h>
#include<conio.h>
#include<iostream>
#define Max 100
using namespace std;
void hoanvi(int& a, int& b)
{
	int tam = a;
	a = b;
	b = tam;
}
void nhap(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap vao phan tu a[" << i << "] : ";
		cin >> a[i];
	}
}
void xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
}
void quicksort(int a[], int l, int r)
{
	int i, j;
	int x;
	x = a[(l + r) / 2];
	i = l; j = r;
	do
	{
		while (a[i] < x)
			i++;
		while (a[j] > x)
			j--;
		if (i <= j)
		{
			hoanvi(a[i], a[j]);
			i++; j--;
		}

	} while (i < j);
	if (l < j)
		quicksort(a, l, j);
	if (i < r)
		quicksort(a, i, r);
}
int main()
{
	int a[Max];
	int n;
	cout << "Nhap vao so phan tu n:";
	cin >> n;
	nhap(a, n);
	quicksort(a, 0, n - 1);
	cout << "Mang sau khi sap xep la:" << endl;
	xuat(a, n);
	return 0;
}