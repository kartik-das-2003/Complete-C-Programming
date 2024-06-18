#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i=1;
    printf("Input Range Value:");
    scanf("%d",&n);
    while(n>0){
        printf("%d ",i);
        i++;
        n--;
    }
    return 0;
}
