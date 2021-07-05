#include <stdio.h>
#include <math.h>
#define MAX 100

int main() 
{
    int col;
    int row;
    int a[MAX][MAX];
    Nhap(a,col,row);
    Xuat(a,col,row);
}
void Nhap(int a[][MAX],int &col,int &row)
{    
    printf("Nhap so cot cua ma tran: ");
    scanf("%d", &col);
    printf("Nhap so hang cua ma tran: ");
    scanf("%d", &row);
    printf("Nhap cac phan tu cua ma tran: \n");
    for (int i= 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
}

void Xuat(int a[][MAX],int col,int row)
{
    printf("Cac phan tu cua ma tran: \n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    }