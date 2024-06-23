#include <stdio.h>
#include <stdlib.h>

//Prototype Declaration
int myFunction_1(int x);    //Integer Return-Type Function
void myFunction_2(int x);   //Void/Nothing Return-Type Function

//Main Function
int main(void){
    int num = myFunction_1(2014);
    printf("My Value Is:%d\n",num);
    myFunction_2(2012);
}

//User Defined Function
int myFunction_1(int x){
    return x;   //As 'int' Type Thus Return Type Is Mandatory
}
void myFunction_2(int x){
    printf("My Value Is:%d\n",x);   //No Return Type Needed
}
