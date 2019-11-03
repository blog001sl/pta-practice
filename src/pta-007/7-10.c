#include <stdio.h>

int main()
{
    int year, hours;
    scanf("%d %d", &year, &hours);

    float money = year < 5 ? 30.0 : 50.0;
    if (hours <= 40)
    {
        printf("%.2f", hours * money);
    }
    else
    {
        printf("%.2f", 40 * money + (hours - 40) * money * 1.5);
    }
}