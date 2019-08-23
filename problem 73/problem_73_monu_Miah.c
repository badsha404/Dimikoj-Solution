/*Bismillahir Rahmanir Rahim*/
#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    char str[205];
    gets(str);
    int l = strlen(str);
    l--;
    while (l >= 0)
    {
        printf("%c", str[l]);
        l--;
    }
    printf("\n");

    return 0;
}
