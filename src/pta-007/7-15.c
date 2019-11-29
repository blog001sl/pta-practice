#include <stdio.h>
#include <math.h>

double calc(int n);
double u = 1.0, d = 1.0;
int main()
{
    double value;
    double mpi = acos(-1.0);
    scanf("%lf", &value);
    if (0.000001 > value)
    {
        // value = 0.000001;
        printf("3.141592");
        return 0;
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
    printf("%.6lf", pi * 2);
}

double calc(int n)
{

    u *= n;
    d *= (2 * n + 1);

    // printf("------------------%lf\n", d);

    double result = u * 1.0 / d;
    // printf("%lf, %lf, %lf\n", u, d, result);
    return result;
}