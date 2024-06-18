#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n,num,fact=1;
    printf("Input Value:");
    scanf("%d",&n);
    num=n;
    while(n>1){
        fact=fact*n;
        n--;
    }
    printf("Factorial Of Number %d is: %d",num,fact);
    return 0;
}
