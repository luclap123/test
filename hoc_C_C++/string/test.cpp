#include <stdio.h>

int main ()
{
    char str[100];
    fgets(str, sizeof str,stdin);
    puts(str);
}