#include<stdio.h>
#include<iostream>
using namespace std;
struct Honso
{
	int Songuyen, Tuso, Mauso;

};
void Nhap(Honso&hs)
{
	cout << "Nhap vao So nguyen:";
	cin >> hs.Songuyen;
	cout << "Nhap vao Tu so:";
	cin >> hs.Tuso;
	do
	{
		cout << "Nhap vao Mau so:";
		cin >> hs.Mauso;

		if (hs.Mauso == 0)
		{
			cout <<"Mau so phai khac 0. Xin kiem tra lai !";
		}
	} while (hs.Mauso == 0);
}
void Xuat(Honso& hs)
{
	cout << "Hon so sau khi nhap la" << endl;
	cout << hs.Songuyen <<endl;
	cout <<"(" << hs.Tuso <<"," << hs.Mauso <<")";
}
int main()
{
	Honso hs;
	Nhap(hs);
	Xuat(hs);
	return 0;
}
