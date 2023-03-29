#include<iostream>
using namespace std;
#define Max 100
void Nhap(int a[],int n)
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
int Tong(int a[], int n)
{
	if (n == 0)
		return 0;
	//int s = Tong(a, n - 1);
	if (a[n - 1] % 2 == 0)
		//s = s + a[n - 1];
		return Tong(a, n - 1) + a[n - 1];
	return Tong(a,n-1);
}
int main()
{
	int a[Max];
	int n;
	cout << "Nhap n:";
	cin >> n;
	Nhap(a, n);
	int tong = Tong(a, n);
	cout << "Tong cac so chan:" << tong;
	return 0;
}