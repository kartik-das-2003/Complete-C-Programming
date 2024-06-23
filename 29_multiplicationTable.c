#include <stdio.h>
#include <stdlib.h>

//Main Function
int main(void){
    int number ;
    printf("Input A Number To Find Multiplication Table:");
    scanf("%d",&number);
    printf("Multiplication Table Of Number %d\n",number);
    for(int i=1;i<=number;i++){
        printf("%d X %d = %d \n",number,i,(number*i));
    }
    return 0;
}
