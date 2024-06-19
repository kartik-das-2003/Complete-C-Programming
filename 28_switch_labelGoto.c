//Insights --> Concept Of Goto,Switch & Break

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;
    label:
    printf("Input Number(1-7):");
    scanf("%d",&n);
    switch(n){
        case 1:
            printf("Today Is Sunday Holiday\n");
            break;
        case 2:
            printf("Today Is Monday Full Day\n");
            break;
        case 3:
            printf("Today Is Tuesday Full Day\n");
            break;
        case 4:
            printf("Today Is Wednesday Full Day\n");
            break;
        case 5:
            printf("Today Is Thursday Full Day\n");
            break;
        case 6:
            printf("Today Is Friday Full Day\n");
            break;
        case 7:
            printf("Today Is Saturday Half-Day\n");
            break;
        default:
            printf("Make Correct Input & Try Again!\n");
            goto label;
            break;
    }
    return 0;
}
