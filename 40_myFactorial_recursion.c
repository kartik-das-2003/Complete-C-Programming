#include <stdio.h>
#include <stdlib.h>

//Directly Write The Whole Function In Prototype Section
int myFact(int num){
    if(num>1){
        return num * myFact(num-1); //Recursion Used
    }
    return 1;
}
//Main Function
int main(void){
    int number ;
    printf("Input A Number To Find Factorial:");
    scanf("%d",&number);
    printf("Factorial Of Number:%d Is:%d\n",number,myFact(number));
    return 0;
}
