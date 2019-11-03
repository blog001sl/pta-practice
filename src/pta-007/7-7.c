#include <stdio.h>

int main()
{
    int hour24, min;
    scanf("%d:%d", &hour24, &min);
    if (hour24 < 12)
    {
        printf("%d:%d AM", hour24 % 12, min);
    }
    else
    {
        printf("%d:%d PM", hour24 == 12 ? 12 : hour24 % 12, min);
    }
}