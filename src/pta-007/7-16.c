#include <stdio.h>

int main()
{
    int start = 0;
    scanf("%d", &start);

    int num[3];
    int nums[4] = {0};
    for (int i = 0; i < 4; i++)
    {
        nums[i] = start + i;
    }

    for (int i = 0; i < 4; i++)
    {
        int j = 0;
        for (int k = 0; k < 4; k++)
        {
            if (i == k)
            {
                start = nums[k];
            }
            else
            {
                num[j++] = nums[k];
            }
        }

        printf("%d%d%d ", start, num[0], num[1]);
        printf("%d%d%d ", start, num[0], num[2]);
        printf("%d%d%d ", start, num[1], num[0]);
        printf("%d%d%d ", start, num[1], num[2]);
        printf("%d%d%d ", start, num[2], num[0]);
        printf("%d%d%d\n", start, num[2], num[1]);
    }
}