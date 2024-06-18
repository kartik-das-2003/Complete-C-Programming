#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n,sum=0;
    printf("Input Value:");
    scanf("%d",&n);

    //Series: 1^2 + 2^2 + 3^2 +.....= n(n+1)(2n+1)/6
    //Try Without Formula
    for(int i=1;i<=n;i++){
        sum=sum+(i*i);
    }
    printf("Sum Of 1 To %d Is: %d",n,sum);
    return 0;
}
