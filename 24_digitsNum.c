#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;
    printf("Input Number:");
    scanf("%d",&n);
    int original = n;
    int len = 0;
    while(n!=0){
        len++;
        n=n/10;
    }
    printf("Length Of Number %d Is: %d\n",original,len);
    return 0;
}
