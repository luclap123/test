#include <iostream>
using namespace std;

int i = 1;
void ham()
{
    static int lanthu = 0;
    lanthu++;
    i = 2 * i;
    cout << "ham chay" << lanthu << ", i = " << i ;

}
main()
{
    ham(); // Hàm chạy lần thứ 1, i = 1
    cout<<endl;
    ham(); // Hàm chạy lần thứ 2, i = 2
    cout<<endl;
    ham(); // Hàm chạy lần thứ 3, i = 4

}