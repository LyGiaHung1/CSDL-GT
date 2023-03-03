#include<stdio.h>
#include<iostream>
using namespace std;
struct Oxy
{
	int x, y;
};
void Nhap(Oxy &Oxy)
{
	cout << "Nhap vao hoanh do x:";
	cin >> Oxy.x;
	cout << "Nhap vao tung do y:";
	cin >> Oxy.y;
}
void Xuat(Oxy &Oxy)
{
	cout << "Toa do diem A(" << Oxy.x << "," << Oxy.y << ")";
}
int main()
{
	Oxy Oxy;
	Nhap(Oxy);
	Xuat(Oxy);
	return 0;
}