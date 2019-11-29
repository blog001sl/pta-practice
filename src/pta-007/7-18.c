#include <stdio.h>

float f(float x, float a3, float a2, float a1, float a0);

int main()
{
    float a, b;
    float result, x;
    float a3, a2, a1, a0;
    scanf("%f %f %f %f", &a3, &a2, &a1, &a0);
    scanf("%f %f", &a, &b);


    do
    {
        x = (a + b) / 2.0;
        float t1 = f(a, a3, a2, a1, a0);
        float t2 = f(b, a3, a2, a1, a0);
        if ( t1 * t2 >= 0)
        {
            break;
        }

        float t3 = f(x, a3, a2, a1, a0);

        if(t1 * t3 >0){
            a = x;
        } else {
            b = x;
        }

    } while (1);

    printf("%.2f", x);

    return 0;
}

float f(float x, float a3, float a2, float a1, float a0)
{
    return a3 * x * x * x + a2 * x * x + a1 * x + a0;
}