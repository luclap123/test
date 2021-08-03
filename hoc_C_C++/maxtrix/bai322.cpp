// Bài 322: Tính tổng các giá trị trên 1 dòng trong ma trận các số thực

#include <stdio.h>
#include <conio.h>
#include <math.h>
#define MAX 100

void input(int a[][MAX], int &row, int &col)
{
    printf("\n input row : ");
    scanf("%d", &row);    
    printf("\n input col : ");
    scanf("%d", &col);

    for (int i = 0; i <row; i++)
    {
        for (int j = 0; j <col; j++)
        {
            printf("\n input a[%d][%d] : ",i,j);
            scanf("%d", &a[i][j]);
        }
    }
}

void output(int a[][MAX], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j=0; j< col; j++)
        {
            printf("%4d",a[i][j]);
        }
        printf("\n\n");
    }
}

int sum (int a[][MAX], int x, int col)
{
    int sumx;
    for (int j = 0; j < col; j++)
    {
        sumx+=a[x][j];
    }
    return sumx;
}


int main ()
{
    int a[MAX][MAX];
    int row, col;

    input(a, row, col);
    output(a, row, col);

    int x;
    printf("\ninput x row : ");
    scanf("%d", &x);
    int Sum=sum(a,x,col);
    printf("\n sum of %d row is : %d",x,Sum);
    getch();
    return 0;
}