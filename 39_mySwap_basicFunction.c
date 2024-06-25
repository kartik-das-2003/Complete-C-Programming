#include<stdio.h>
#include<stdlib.h>

//Directly Write The Whole Function In Prototype Section
//Swapping Approach
void mySwap(int n, int m){
    int temp = n;
    n = m;
    m = temp;
    printf("After Swap: %d & %d\n",n,m);
}

//Main Function
int main(void){
    int num1, num2;
    printf("Input Any Number:");
    scanf("%d",&num1);
    printf("Input Any Number(Number Must Be Not Equal With Previous One):");
    scanf("%d",&num2);
    printf("Before Swap: %d & %d\n",num1,num2);
    mySwap(num1, num2);
    return 0;
}

