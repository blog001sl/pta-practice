#include <stdio.h>

int main()
{
    float open, high, low, close;

    scanf("%f %f %f %f", &open, &high, &low, &close);

    char *rstr;
    if (close < open)
    {
        rstr = "BW-Solid";
    }
    else if (close > open)
    {
        rstr = "R-Hollow";
    }
    else
    {
        rstr = "R-Cross";
    }

    printf("%s", rstr);

    int flag = 0;

    if (low < open && low < close)
    {
        flag = flag | 1;
    }

    if (high > open && high > close)
    {
        flag = flag | 2;
    }

    switch (flag)
    {
    case 1:
        printf(" with Lower Shadow");
        break;
    case 2:
        printf(" with Upper Shadow");
        break;
    case 3:
        printf(" with Lower Shadow and Upper Shadow");
        break;

    default:
        break;
    }
}