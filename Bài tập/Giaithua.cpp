#include<stdio.h>
#include<conio.h>
#include <iostream>
using namespace std;
int Giaithua(int n)
{
    if (n == 1)
        return 1;
    if (n == 0)
        return 1;
    return  Giaithua(n - 1) * n;
}

int main()
{
    int n;
    cout << "Nhap n:";
    cin >> n;
    Giaithua(n);
    cout << "S=" << Giaithua(n);
    return 0;
}