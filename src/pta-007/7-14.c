#include<stdio.h>
int main()
{
    int a,b;
    int i;
    scanf("%d %d",&a,&b);

    int Sum=0;
    int j=0;
    for(i=a;i<=b;i++)
    {

       if(j!=0&&j%5==0)
        {
             printf("\n");
             printf("%5d",i);
        }
        else
         printf("%5d",i);
     Sum=Sum+i;
     j++;
    }
    printf("\n");
    printf("Sum = %d",Sum);
    return 0;
}
