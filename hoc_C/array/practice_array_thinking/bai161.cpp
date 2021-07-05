// Bài 161: Cho mảng 1 chiều các số nguyên, hãy tìm giá trị đầu tiên nằm trong khoảng [x, y] cho trước.
//  Nếu mảng không có giá trị thỏa điều kiện trên thì trả về -1

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

int findfirst(int a[], int n, int x, int y)
{
	int dem = 0;
	int i;
	for(i = 0; i < n; i++)
	{
		if(a[i] >= x && a[i] <= y)
		{
			dem++;
			break;
		}
	}
	if(dem == 0)
	{
		return -1;
	}
	return a[i];
}

int main()
{
    int a[max];
    int n,x,y;

    do
    {
       printf("input n : ");
       scanf("%d", &n);
    } while (n<0 || n>max);

    input (a,n);
    output (a,n);

    printf("\ninput x: ");
    scanf("%d", &x);
 
    printf("\ninput y: ");
    scanf("%d", &y);

    int result=findfirst(a,n,x,y);
    printf("\ngia tri dau tien nam trong khoan [%d %d] la : %d",x,y,result);

    getch();
    return 0;
}