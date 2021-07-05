// Bài 315: Viết hàm tìm giá trị lớn nhất trong ma trận số thực

#include <stdio.h>
#include <math.h>
#include <conio.h>
#define MAX 100

void input(int a[][MAX], int &row, int &col)
{
    printf("\ninput row : ");
    scanf("%d", &row);
    printf("\ninput col : ");
    scanf("%d", &col);

    for (int i = 0; i <row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("\n input a[%d][%d] : ",i,j);
            scanf("%d", &a[i][j]);
        }
    }
}

void output (int a[][MAX], int row, int col)
{
    for (int i = 0; i <row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("\n%4d ",a[i][j]);
        }
        printf("\n");
    }
}

int find_max (int a[][MAX], int row, int col)
{
    int max=a[0][0];
    for (int i = 0; i <row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            max=max<a[i][j] ? a[i][j] :max;
        }
    }
    return max;
}

int main ()
{
    int a[MAX][MAX];
    int row,col;
    input (a, row, col);
    output (a, row, col);
    
    int max=find_max(a, row, col);
    printf("\n number max in :%d ",max);
    getch();
    return 0;
}