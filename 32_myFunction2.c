#include <stdio.h>
#include <stdlib.h>

//Without Prototype Declaration We Need To Write The Functions Earlier Than Main Function
//User Defined Function
int myFunction_1(int x){
    return x;   //As 'int' Type Thus Return Type Is Mandatory
}
void myFunction_2(int x){
    printf("My Value Is:%d\n",x);   //No Return Type Needed
}

//Main Function
int main(void){
    int num = myFunction_1(2014);
    printf("My Value Is:%d\n",num);
    myFunction_2(2012);
}
