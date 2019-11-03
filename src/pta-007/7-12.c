#include <stdio.h>

int main()
{
    int i1, i2;
    char m;

    scanf("%d %c %d", &i1, &m, &i2);
    switch (m)
    {
    case '+':
        printf("%d", i1 + i2);
        break;
    case '-':
        printf("%d", i1 - i2);
        break;
    case '*':
        printf("%d", i1 * i2);
        break;
    case '/':
        printf("%d", i1 / i2);
        break;
    case '%':
        printf("%d", i1 % i2);
        break;
    default:
        printf("ERROR");
        break;
    }
}