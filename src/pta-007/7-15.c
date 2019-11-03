#include <stdio.h>
#include <math.h>

double calc(int n);
double u = 1, d = 1;
int main()
{
    float value;
    float mpi = acos(-1.0);
    scanf("%f", &value);
    if (0.00000001 > value)
    {
        value = 0.00000001;
    }

    double pi = 1.0;
    int n = 1;

    double tmp = 0;

    do
    {
        pi = pi + calc(n++);
        tmp = mpi - pi * 2;
        if(tmp < 0){
            tmp = - tmp;
        }
    } while (tmp > value);
    printf("%.6f", pi * 2);
}

double calc(int n)
{

    u *= n;
    d *= (2 * n + 1);

    float result = u * 1.0 / d;
    // printf("%lf, %lf, %lf\n", u, d, result);
    return result;
}