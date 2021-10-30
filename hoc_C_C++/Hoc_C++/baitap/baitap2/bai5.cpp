#include "stdio.h"
#include "conio.h"
#define MAX_SIZE 100
 
int main()
{
    int A[] = {1, -8, 2, 2, 3, 5, 23, 13, 44};
    int n = sizeof(A)/sizeof(int);
    int m = 0,k = 0;
    int B[MAX_SIZE];
    int C[MAX_SIZE];
 
    split_arr(A, n, B, &m, C, &k);
    print_arr(A, n, 'A');
    printf("\n____________");
    print_arr(B, m, 'B');
    printf("\n____________");
    print_arr(C, k, 'C');
    getch();
}
 
void split_arr(int A[], int n, int B[], int* m, int C[], int *k)
{
    int i, j;
    for(i = 0; i < n; i++)
    {
        if(A[i]%2 != 0) // odd number
        {
            B[(*m)++] = A[i];
        }
        else //even number
        {
            C[(*k)++] = A[i];
        }
    }
}
 
void print_arr(int A[], int n, char name_arr)
{
    int i;
    if(n == 0)
    {
        printf("\nArray %c is empty", name_arr);
        return;
    }
    for(i = 0; i < n; i++)
    {
        switch(name_arr)
        {
        case 'A':
        case 'a':
            printf("\nA[%d] = %d", i, A[i]);
            break;
        case 'B':
        case 'b':
            printf("\nB[%d] = %d", i, A[i]);
            break;
        case 'C':
        case 'c':
            printf("\nC[%d] = %d", i, A[i]);
        }
    }
}