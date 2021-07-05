//nhập vào một số kiểm tra số đó phải số đối xứng không

#include <stdio.h>

int daoso (int n)
{
    int num= n%10;
    n /=10;
    int last;
    while(n >0)
    {
        last = n %10;
        n /=10;
        num = num *10 +last;
    }
    return num;
}


int main()
{
    int num;
    printf("nhap vao so : ");
    scanf("%d", &num);
    
    int s=daoso(num);
    if (num ==s)
    {
        printf("%d la so doi xung", num);
    }
    else{
        printf("%d khong phai so doi xung", num);
    }
}