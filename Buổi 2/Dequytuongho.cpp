//https://freetuts.net/de-quy-tuong-ho-mutual-recursion-2961.html
#include <iostream>
using namespace std;

bool isEven(int n);
bool isOdd(int n);

bool isEven(int n) {
    if (n == 0)
        return true;
    else
        return isOdd(n - 1);
}

bool isOdd(int n) {
    return !isEven(n);
}
int main() {
    int n;
    cout << "Nhap n";
    cin >> n;
    bool kq = isEven(n);
    if (kq == true)
        cout << n << " la so chan";
    else
        cout << n << " la so le";
}