//Concept Of --> Break

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n,br;
    label:
    printf("Input Total Numbers:");
    scanf("%d",&n);
    printf("Which Position Do You Want To Break/Stop?:");
    scanf("%d",&br);
    for(int i=1;i<=n;i++){
        printf("%d ",i);
        if(i==br){
            printf("\nPermit To Break After %d\n",br);
            break;
        }
    }
    printf("\n");
    return 0;
}
