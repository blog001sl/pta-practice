#include <stdio.h>

int main()
{
    int start, pass, nowhour, nowmins;
    scanf("%d %d", &start, &pass);

    int mins = start % 100;
    int hours = start / 100;

    int pa = (pass + mins) / 60;

    nowhour = (hours + pa) % 24;
    nowmins = (pass + mins) % 60;

    if (nowmins < 0)
    {
        nowmins = 60 + nowmins;
        nowhour--;
    }
    if (nowhour < 0)
    {
        nowhour = 24 + nowhour;
    }

    printf("%d%02d", nowhour, nowmins);
    return 0;
}