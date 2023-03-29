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
int Dem(int a[], int n)
{
	if (n == 0)
		return 0;
	int d = Dem(a, n - 1);
	if (a[n - 1] > 0)
		return 1 + Dem(a, n - 1);
	return Dem(a, n - 1);
}
int main()
{
	int a[Max];
	int n;
	cout << "Nhap n:";
	cin >> n;
	Nhap(a, n);
	int kq=Dem(a, n);
	cout << "Tong cac gia tri duong:" <<kq;
	return 0;
}
