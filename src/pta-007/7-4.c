#include <stdio.h>
#include <stdlib.h>

int main(){
    char str[25] = {0};
    int oriNum;
    scanf("%d", &oriNum);
    sprintf(str, "%x", oriNum);
    printf("%s", str);
}