#include <stdio.h>

int main()
{
    int speed;
    scanf("%d", &speed);

    char *str;
    if (60 < speed)
    {
        str = "Speeding";
    }
    else
    {
        str = "OK";
    }

    printf("Speed: %d - %s", speed, str);
}