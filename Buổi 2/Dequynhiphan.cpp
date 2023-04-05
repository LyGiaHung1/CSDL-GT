//https://freetuts.net/de-quy-nhi-phan-binary-recursion-2953.html
#include <iostream>
using namespace std;

int fib(int n) {
	if (n <= 2) return 1;
	return fib(n - 1) + fib(n - 2);
}

int main() {
	int kq, n;
	cout << "Nhap n de tim vi tri so fibonacci: ";
	cin >> n;
	kq = fib(n);
	cout << "\nSo fibonacci tai " << n << " la: " << kq;
}