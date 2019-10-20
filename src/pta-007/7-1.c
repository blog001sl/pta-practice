#include <stdio.h>

int main()
{
    int cm;
    scanf("%d", &cm);

    int foots = cm / (100 * 0.3048);

    int inchs = (cm / (100 * 0.3048) - foots) * 12;
    printf("%d %d", foots, inchs);

    return 0;
}