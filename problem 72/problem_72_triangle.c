/*Bismillahir Rahmanir Rahim*/
#include <stdio.h>
#include <math.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        double a, b, c;
        scanf("%lf %lf %lf", &a, &b, &c);
        if (a + b >= c && b + c >= a && c + a >= b)
        {
            double s = (a + b + c) / 2.0;
            printf("%0.2lf\n", sqrt(s * (s - a) * (s - b) * (s - c)));
        }
        else
        {
            printf("Oh, No!\n");
        }
    }

    return 0;
}
