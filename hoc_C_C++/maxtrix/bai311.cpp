// Bài 311 + 313: Viết hàm nhập xuất ma trận số nguyên

#include <stdio.h>
#include <math.h>
#include <conio.h>
#define MAX 100

void input (int a[][MAX], int &row, int &col)
{
    printf("\n input row ");
    scanf("%d", &row);
    printf("\n input col ");
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
            printf("\n%4d",a[i][j]);
        }  
        printf("\n");
    }
}

int main ()
{
    int a[MAX][MAX];
    int row;
    int col;
    input(a,row,col);
    output(a,row,col);
    getch();
    return 0;
}