#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sum,i;
    sum=0;
    i=1;
    while(i<=100){
        sum=sum+i;
        i++;
    }
    printf("1+2+3+.....+100=%d",sum);
    return 0;
}
