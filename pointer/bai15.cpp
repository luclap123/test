#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>

main()
{
    char *st;
int len = 0; gets(st); while (st++ != '\0') len++; printf("%d",len);
}