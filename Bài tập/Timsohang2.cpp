#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;
long tinhXn(int n)
{
    if (n == 0)
        return 1;
    long s = 0;
    for (int i = 1; i <= n; i++)
    {
        s = s + i * i * tinhXn(n - i);
    }
    return s;
}
int main()
{
    int n;
    cout << "Nhap n:";
    cin >> n;
    long s = tinhXn(n);
    cout << "S=" << s;
    return 0;
}