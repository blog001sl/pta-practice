#include <stdio.h>

void Print_Factorial ( const int N );

int main()
{
    int N;
	
    scanf("%d", &N);
    Print_Factorial(N);
    return 0;
}

void Print_Factorial ( const int N )
{
    
    if(N<0){
        printf("Invalid input");
    } else {

        int max_length = 1000;
        int max_unit = 10000;
        unsigned short bigint[1000] = {0};
        unsigned short overint[1000] = {0};
        bigint[0] = 1;
        int datalength = 1;
        for(int i=2;i<=N;i++){
            int j=0;
            for(;j<datalength;j++){
                int tmp = bigint[j]*i;
                if(tmp < max_unit){
                    bigint[j] = tmp;
                    overint[j] = 0;
                } else {
                    overint[j] = tmp / max_unit;
                    bigint[j] = tmp % max_unit;
                }
            }

            int plus = 0;
            
            for(int x=1;x<datalength;x++){
                int tmp = bigint[x] + overint[x-1] + plus;
                if(tmp<max_unit){
                    bigint[x] = tmp;
                    plus = 0;
                } else {
                    bigint[x] = tmp % max_unit;
                    plus = tmp / max_unit;

                }
                
            }
            plus = plus + overint[datalength-1];
            if(plus > 0){
               datalength ++;
               bigint[datalength-1] = plus;
            }
           
        }

        for(int i=0;i<datalength;i++){
            if(0==i){
                printf("%d", bigint[datalength - 1- i]);
            } else {
                printf("%04d", bigint[datalength - 1- i]);
            }
            
        }
    }
    printf("\n");

}