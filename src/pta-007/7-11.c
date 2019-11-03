#include <stdio.h>

int main()
{
    float water;
    scanf("%f", &water);

    if (water > 15)
    {
        printf("%.2f", water * 2.5 - 17.5);
    }
    else
    {
        printf("%.2f", water * 4 / 3);
    }
}