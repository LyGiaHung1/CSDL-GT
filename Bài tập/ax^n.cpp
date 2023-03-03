#include<stdio.h>
#include<iostream>
using namespace std;
struct Donthuc
{
	float a;
	int n;
};
void Nhap(Donthuc &DT)
{
	cout << "Nhap vao he so a:";
	cin >> DT.a;
	cout << "Nhap vao bac cua don thuc n:";
	cin >> DT.n;
}
void Xuat(Donthuc& DT)
{
	cout << "Don thuc:" << DT.a << "^" << DT.n;
}
int main()
{
	Donthuc DT;
	Nhap(DT);
	Xuat(DT);
	return 0;
}