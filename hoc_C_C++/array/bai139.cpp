// Bài 139: Tìm vị trí số hoàn thiện cuối cùng trong mảng 1 chiều các số nguyên. 
// Nếu mảng không có số hoàn thiện thì trả về giá trị  -1

#include <stdio.h>
#define max 100

void nhap (int a[], int n)
{
    for (int i=0; i<n; i++)
    {
        printf("nhap a[%d] : ", i);
        scanf("%d", &a[i]);
    }
}


void xuat (int a[], int n)
{
    for (int i=0; i<n; i++)
    {
        printf("\t%d", a[i]);
    }
    
}

bool sohoanhao(int n)
{
	int i = 1;
	int S = 0;
	while(i < n)
	{
		if(n % i == 0)
		{
			S = S + i;
		}
		i++;
	}
	if(S == n)
		return true;
	else
		return false;
}

int vitri(int a[], int n)
{
	for(int i = n - 1; i >= 0; i--)
	{
		if(sohoanhao(a[i]) == true)
		{
			return i;
		}
	}
	return -1;
}

int main()
{
    int a[max];
    int n;

    do
    {
        printf("nhap vao n :");
        scanf("%d", &n);
    } while (n<0 || n>max);

    nhap (a,n);
    xuat (a,n);

    printf("\nvi tri cua so hoan hao cuoi cung : %d",vitri(a,n));
    return 0;
    
}