#include <iostream>

using namespace std;

int main()
{
    int *head, *p, *q, n, tam; // head trỏ đến (đánh dấu) đầu dãy
    
    cout << "nhap n : "; cin >> n ;
    head = new int[n] ; // cấp phát bộ nhớ chứa n số nguyên
    for (p=head; p<head+n; p++) // nhập dãy
    {
        cout << "So thu " << p-head+1 << ": " ; cin >> *p ;
    }
        for (p=head; p<head+n-1; p++) // sắp xếp
        {
             for (q=p+1; q<head+n; q++)
             {
                if (*q < *p) 
                { 
                    tam = *p; 
                    *p = *q; 
                    *q = tam;
                } // đổi chỗ  
             }
        }
        for (p=head; p<head+n; p++) cout << *p <<endl; // in kết quả
}