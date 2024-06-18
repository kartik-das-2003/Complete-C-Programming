#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Input Range Value:");
    scanf("%d",&num);
    for(int i=0;i<=num;i++){
        if(i%2==0){
            printf("%d ",i);
        }
    }
    return 0;
}
