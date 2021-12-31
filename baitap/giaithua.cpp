#include <iostream>
#include <stdio.h>
using namespace std;
// tính giai thừa dùng đệ quy của số n
int giaithua(int n)
{
    if (n == 0)
        return 1;
    else
        return n * giaithua(n - 1);
}

int main()
{
    int n;
    cout << "Nhap n: ";
    cin >> n;
    cout << "Giai thua cua " << n << " la: " << giaithua(n);
    return 0;
}