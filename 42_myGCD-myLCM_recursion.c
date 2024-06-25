#include <stdio.h>
#include <stdlib.h>

//Directly Write The Whole Function In Prototype Section
int myGCD(int x,int y){
    if(x%y!=0){
        return myGCD(y%x,x);    //Recursion Used
    }
    else{
        return y;
    }
}

int myLCM(int x,int y){
    int lcm = (x*y)/myGCD(x,y);
}

//Main Function
int main(void){
    int num1,num2 ;
    printf("Input 1st Number:");
    scanf("%d",&num1);
    printf("Input 2nd Number:");
    scanf("%d",&num2);
    printf("GCD Of %d & %d = %d\n",num1,num2,myGCD(num1,num2));
    printf("LCM Of %d & %d = %d\n",num1,num2,myLCM(num1,num2));
    return 0;
}

