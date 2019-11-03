#include <stdio.h>

int main()
{
    int first, last, sum, count = 0;
    scanf("%d %d", &first, &last);
    int i;

    count = 0;
    for (i = first; i <= last; i++)
    {
        printf("%5d", i);
        if (count >= 4)
        {
            printf("\n");
            count = 0;
        } else {
            count ++;
        }
        sum = sum + i;
    }
    if (count != 0)
    {
        printf("\n");
    }
    printf("Sum = %d", sum);
    return 0;
}