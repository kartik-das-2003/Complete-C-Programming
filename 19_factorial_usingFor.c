#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n,fact=1;
    printf("Input Value:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    printf("Factorial Of Number %d is: %d",n,fact);
    return 0;
}
