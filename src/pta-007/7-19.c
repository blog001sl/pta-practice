#include <stdio.h>

int main()
{
    int y = -1, f = -1, n;

    scanf("%d", &n);

    for (int i = 0; i < 100; i++)
    {
        if ((98 * i - n) % 199 == 0)
        {
            f = i;
            y = (98 * i - n) / 199;
            break;
        }
    }

    if (-1 == f)
    {
        printf("No Solution");
    }
    else
    {
        printf("%d.%d", y, f);
    }

    return 0;
}