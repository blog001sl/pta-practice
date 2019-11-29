#include <stdio.h>

int main()
{
    int N, x, y;
    int ok = 0;
    scanf("%d", &N);

    for (y = N; y > 0; y--)
    {
        int y2 = y * y;

        if (y2 > N)
        {
            continue;
        }
        for (x = 1; x <= y; x++)
        {
            int result = x * x + y2;
            // printf("%d, %d, %d, %d.", x, y, y2, result);
            if (result == N)
            {
                printf("%d %d\n", x, y);
                ok = 1;
                break;
            }
            else if (result > N)
            {
                break;
            }
        }
    }

    if (!ok)
    {
        printf("No Solution");
    }

    return 0;
}