#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r;
    printf("Input Value:");
    scanf("%d",&r);
    for(int i=0;i<r;i++){
        for(int j=0;j<r;j++){
            if(i+j>=(r-1)){
                printf(" * ");
            }
            else{
                printf("   ");
            }
        }
        printf("\n");
    }
    return 0;
}
