#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;
    printf("Input Value:");
    scanf("%d",&n);
    int original = n;
    int remainder;
    int reverse;

    while(n!=0){
        remainder = n%10;
        reverse = reverse*10 + remainder;
        n=n/10;
    }

    printf("Reverse Of Number %d is: %d",original,reverse);
    return 0;
}
