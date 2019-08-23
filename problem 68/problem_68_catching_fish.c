/*Bismillahir Rahmanir Rahim*/
#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    int tup = 0;
    int fish = 0;
    char str[20];
    int first_condition = 7;
    int second_condition = 3;
    while (scanf("%s", str) != EOF)
    {
        if (!strcmp(str, "fish"))
        {
            if (tup >= 2 && first_condition >= 7 && second_condition >= 3)
            {
                fish++;
                tup -= 2;
                first_condition = 0;
                second_condition = 1;
            }
            else
            {
                second_condition++;
            }
        }

        else if (!strcmp(str, "bait") && tup < 6)
        {
            tup++;
        }

        first_condition++;
    }
    printf("%d\n", fish);

    return 0;
}