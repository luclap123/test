// Bài 317: Viết hàm đếm số lượng số nguyên tố trong ma trận số nguyên

#include <stdio.h>
#include <math.h>
#include <conio.h>
#define MAX 100

void input (int a[][MAX], int &row, int &col)
{
    printf("\ninput row ");
    scanf("%d", &row);
    printf("\ninput col ");
    scanf("%d", &col);

    for (int i=0; i<col; i++)
    {
        for (int j=0; j<row; j++)
        {
            printf("\ninput number a[%d] a[%d]:",i,j);
            scanf("%d",&a[i][j]);
        }
    }
}

void output (int a[][MAX], int row, int col)
{
      for (int i=0; i<col; i++)
    {
        for (int j=0; j<row; j++)
        {
            printf("%4d",a[i][j]);
        }  
        printf("\n\n");
    }
}


int KiemTraNguyenTo(int n)
{
    if(n < 2)
    {
        return 0;
    }
    else if(n > 2)
    {
        if(n % 2 == 0)
        {
            return 0;
        }
        for(int i = 3; i < n; i += 2)
        {
            if(n % i == 0)
            {
                return 0;
            }
        }
    }
    return 1;
}

int count (int a[][MAX], int row, int col)
{
    int amount=0;
    for (int i=0; i<row; i++)
    {
        for (int j=0; j<col; j++)
        {
            if (KiemTraNguyenTo(a[i][j])==1)
            {
                amount++;
            }
            
        }
    }
    return amount;
}

int main ()
{
    int a[MAX][MAX];
    int row;
    int col;
    input(a,row,col);
    output(a,row,col);

    int amount=count(a,row,col);
    printf("\n amount prime in the array : %d",amount);
    getch();
    return 0;
}