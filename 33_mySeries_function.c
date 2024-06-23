#include <stdio.h>
#include <stdlib.h>

//Directly Write The Whole Function In Prototype Section
void mySeries(int num){
    int i = 1;
    while(num!=0){
        printf("%d\n",i);
        i++;
        num--;
    }
}

//Main Function
int main(void){
    int number ;
    printf("Input A Number To Find Series:");
    scanf("%d",&number);
    mySeries(number);
    return 0;
}
