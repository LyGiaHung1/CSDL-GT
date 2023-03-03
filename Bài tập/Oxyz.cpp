#include<stdio.h>
#include<iostream>
using namespace std;
struct Oxyz
{
	int x, y,z;
};
void Nhap(Oxyz& Oxyz)
{
	cout << "Nhap vao hoanh do x:";
	cin >> Oxyz.x;
	cout << "Nhap vao tung do y:";
	cin >> Oxyz.y;
	cout << "Nhap vao cao do z:";
	cin >> Oxyz.z;
}
void Xuat(Oxyz& Oxyz)
{
	cout << "Toa do diem A(" << Oxyz.x << "," << Oxyz.y << ","<<Oxyz.z<<")";
}
int main()
{
	Oxyz Oxyz;
	Nhap(Oxyz);
	Xuat(Oxyz);
	return 0;
}