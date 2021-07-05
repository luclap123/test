#include <iostream>
using namespace std;

main() {
    int n;
    cin >> n;
    int h = n / 3600; //0
    int m = (n - h * 3600) / 60; //0
    int s = n - h * 3600 - m * 60; //
    if (h < 10) cout << "0";
    cout << h;
    cout << ":";
    if (m < 10) cout << "0";
    cout << m;
    cout << ":";
    if (s < 10) cout << "0";
    cout << s;
    return 0;
}