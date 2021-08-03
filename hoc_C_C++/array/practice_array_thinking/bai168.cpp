// Bài 168: Cho mảng 1 chiều các số nguyên. Hãy viết hàm tìm giá trị lớn nhất trong mảng có dạng 5^k.
//  Nếu mảng khong tồn tại giá trị 5^k thì hàm sẽ trả về 0


#include <stdio.h>
#include <conio.h>
#define max 100

void input(int a[], int n)
{
   

    for (int i=0; i<n; i++)
    {
        printf("input a[%d]: ",i);
        scanf("%d", &a[i]);
    }
}

void output (int a[], int n)
{
    for (int i=0; i<n; i++)
    {
        printf("\t%d", a[i]);
    }
}

int find5k(int n)
{
   	if (n <= 1)
      return 1;
	while(n > 1)  // vòng lặp kết thúc khi n == 5
    {
        if(n % 5 != 0)  // Có thể viết n % 5
            return 0;
        n /= 5;
    }
    return 1;
}

int find_max(int a[], int n)
{   
    int dem=0;
    int Max;
    for (int i=0; i<n; i++)
    {
        if (find5k(a[i])==1)
        {
            Max=a[i];
            dem++;
            break;
        }
    }
    if (dem==0)
    return 0;
    for (int i=0; i<n; i++)
    {
        if (find5k(a[i])==1)
        {
            Max=Max >a[i] ?Max :a[i];
          
        }
    }
      return Max;
}

int main ()
{
    int a[max];
    int n;
    do
    {
       printf("input n : ");
       scanf("%d", &n);
    } while (n<0 || n>max);
    
    input (a,n);
    output (a,n);

    int MAX=find_max(a,n);
    printf("\nthe 5k in array is : %d", MAX);
    getch();
    return 0;
}