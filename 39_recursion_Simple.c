#include <stdio.h>
#include <stdlib.h>

//Directly Write The Whole Function In Prototype Section
//Simple Recursion Approach
int myFun(int num){
    if(num>0){
        printf("Hello %d\n",num);
        num--;
        return myFun(num); //Recursion Technique Used
    }
    return num;
}

//Main Function
int main(void){
    int num1;
    printf("Input Any Number(Number Must Be Greater Than 5):");
    scanf("%d",&num1);
    printf("Last Value Obviously:%d\n",myFun(num1));
    return 0;
}
