//https://gochocit.com/ky-thuat-lap-trinh/thuat-toan-sap-xep-chon-truc-tiep-selection-sort
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
void Swap(int& a, int& b)
{
	int tam = a;
	a = b;
	b = tam;
}
void CTT(int a[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		int min = i;
		for (int j = i + 1; j < n; j++)
			if (a[j] < a[min])
				min = j;
		Swap(a[min], a[i]);
	}
}
int main()
{
	int a[Max], n;
	cout << "Nhap vao n:";
	cin >> n;
	Nhap(a, n);
	CTT(a, n);
	Xuat(a, n);
	return 0;
}