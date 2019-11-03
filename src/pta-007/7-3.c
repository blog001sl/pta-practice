#include <stdio.h>

int main()
{
    int oriNum;
    scanf("%d", &oriNum);

    int first = oriNum/100;
    int second = (oriNum - first*100)/10;
    int third = (oriNum - first*100 - second * 10);
    
    if(0 == third){
        if(0 == second){

        } else {
            printf("%d", second);
        }
    } else {
        printf("%d", third);
        printf("%d", second);
    }
    printf("%d", first);
}