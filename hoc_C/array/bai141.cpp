// Bài 141: Hãy tìm vị trí giá trị dương nhỏ nhất trong mảng 1 chiều các số thực.
//  Nếu mảng không có giá trị dương thì trả về  -1

#include <stdio.h>
#include <conio.h>
#include <math.h>
#define max 100

void nhap(float a[], int n)
{
   

    for (int i=0; i<n; i++)
    {
        printf("nhap a[%d]: ",i);
        scanf("%f", &a[i]);
    }
}

void xuat(float a[], int n)
{
    for (int i=0; i<n; i++)
    {
        printf("\t%5.f", a[i]);
    }
}

float find_location(float a[], int n)
{
  int i,min;
  int dem=0;
  for (i=0; i<n; i++)
  {
      if (a[i]>0)
      {
        dem++;
        min=i;
        break;
      }
  }
   if (dem == 0)
      return -1;
      for (i=i+1; i<n; i++)
      {
          if (a[i]> 0 && a[i]<a[min])
          {
              min = i;
          }
      }
      return min;
}

int main ()
{
    float a[max];
    int n;

    do
    {
        printf("nhap vao n: ");
        scanf("%d", &n);
    } while (n<0 || n>max);
    
    nhap (a,n);
    xuat (a,n);

    int min=find_location(a,n);
    printf("\nthe smallest position in the array : %d", min);
    getch ();
    return 0;
}