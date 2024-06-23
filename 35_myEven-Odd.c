#include <stdio.h>
#include <stdlib.h>

//Directly Write The Whole Function In Prototype Section
void myEven_Odd(int num){
    if(num%2==1){
        printf("The Number %d Is Odd.\n",num);
    }
    else{
        printf("The Number %d Is Even.\n",num);
    }
}

//Main Function
int main(void){
    int number ;
    printf("Input A Number To Find Even/Odd:");
    scanf("%d",&number);
    myEven_Odd(number);
    return 0;
}
