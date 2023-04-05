//https://blog.luyencode.net/thuat-toan-tim-kiem-nhi-phan/
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
int TKNP(int a[],int n,int x)
{
	int l = 0, r = n - 1;
	do {
		int mid = (l + r) / 2;
		if (x = a[mid])
			return mid;
		else
			if (x < a[mid])
				r = mid - 1;
			else
				l = mid + 1;
	} while (l <= r);
	return -1;
}
int main()
{
	int a[Max],n,x;
	cout << "Nhap vao n:";
	cin >> n;
	Nhap(a,n);
	cout << "Nhap so can tim:";
	cin >> x;
	int kq = TKNP(a, n, x);
	if (kq != -1)
	{
		cout << "So can tim xuat hien tai " << kq;
	}
	else
	{
		cout << "So can tim khong co trong mang";
	}
	return 0;
}