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
    if(original==reverse){
        printf("%d Is A Palindrome Number",original);
    }
    else{
        printf("%d Is Not A Palindrome Number",original);
    }
    return 0;
}
