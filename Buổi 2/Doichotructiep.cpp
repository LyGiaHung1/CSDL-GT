//https://gochocit.com/ky-thuat-lap-trinh/thuat-toan-sap-xep-doi-cho-truc-tiep-interchange-sort
#include<iostream>
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
void Swap(int &a,int &b)
{
	int tam = a;
	a = b;
	b = tam;
}
void DCTT(int a[], int n)
{
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (a[j] < a[i])
				Swap(a[i], a[j]);
}
int main()
{
	int a[Max], n, x;
	cout << "Nhap vao n:";
	cin >> n;
	Nhap(a, n);
	DCTT(a, n);
	Xuat(a, n);
	return 0;
}