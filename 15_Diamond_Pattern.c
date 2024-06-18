#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r;
    printf("Input Value(For Better Result Try Odd Value):");
    scanf("%d",&r);
    for(int i=0;i<r;i++){
        for(int j=0;j<r;j++){
            if(i+j>=(r/2) && j-i<=(r/2) && i-j<=(r/2) && i+j<=(r-1+(r/2))){
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
