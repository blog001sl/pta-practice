#include <stdio.h>

int main()
{

    int n = 0, u = 0, d = 0, height = 0, count = 0;

    scanf("%d %d %d", &n, &u, &d);

    while (height < n)
    {
        height += u;
        count ++;
        if(height < n){
            height -= d;
            count ++;
        }
    }

    printf("%d\n", count);
    return 0;
}