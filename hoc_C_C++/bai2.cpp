#include<stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 100
void bai1()
{
	char s[N];
	// printf("moi ban nhap vao chuoi: ");
    fgets(s, sizeof(N), stdin);
	int n=0;
	int i=0;
	int p=0;
	while(s[i++] != '\0') {
		if(s[i] == 'a' || s[i]=='i'|| s[i]=='e' || s[i]=='u' || s[i]=='o'){
			n++;
		}else{
			p++;
		}
		}	
	printf("Chuoi %s co chua\n ",s);
	printf("%d nguyen am\n",n);
	printf("%d phu am\n",p);
}

void bai2(){
	char user1[]="admin";
	char pass1[] = "12345";
	char user[100];
	int pass;
	printf("moi ban nhap username: ");gets(user);
	getchar();
	printf("moi ban nhap pass: ");scanf("%d",&pass);
	getchar();
	if(strcmp(user,user1)==0 && (pass,pass1)){
	 printf("Ban da dang nhap thanh cong ! \n");
	}else{
	 printf("Ban da dang nhap that bai ! \n");
	}
	}

int main() {
	int m;
	do{
		printf("Welcome to the menu\n");
		printf("1. Bai 1\n");
		printf("2. Bai 2\n");
		printf("3. Exit\n");
		printf("ban chon chuc nang : ");scanf("%d",&m);

		switch(m)
        {
		case 1: 
        bai1();
        break;
		case 2: bai2();break;
		case 3: printf("Khong co chuc nang\n");break;
		default: printf("PAI PAI\n");break;
		}
	}
	while(m!=0);
	return 0;
}
