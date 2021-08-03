// Bài 321: Tính tích các giá trị lẻ trong ma trận các số nguyên

#include <stdio.h>
#include <conio.h>
#include <math.h>
#define MAX 100

void input(int a[][MAX], int &row, int &col)
{
    printf("\n nhap vao so hang : ");
    scanf("%d", &row);    
    printf("\n nhap vao so cot : ");
    scanf("%d", &col);

    for (int i = 0; i <row; i++)
    {
        for (int j = 0; j <col; j++)
        {
            printf("\n nhap a[%d][%d] : ",i,j);
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

int multiply(int a[][MAX], int row, int col)
{
    int tich=1;
    int n=row*col;
    for (int i=0; i<n;i++)
    {
        if (a[i /row][i %row] % 2 !=0 )
        {
            tich*=a[i /row][i %row];
        }
    }
    return tich;
}


int main ()
{
    int a[MAX][MAX];
    int row, col;

    input(a, row, col);
    output(a, row, col);
    int Multiply=multiply(a, row, col);
    printf("\nmultiply of the maxtrix is : %d ",Multiply);
    getch();
    return 0;
}