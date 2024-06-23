#include <stdio.h>
#include <stdlib.h>

int pow=1;//Globally Declared
//Directly Write The Whole Function In Prototype Section
int myFun(int x,int y,int n){
    switch(n){
        case 1 :
            printf("Addition: %d + %d = %d\n",x,y,x+y);
            break;
        case 2 :
            printf("Subtraction: %d - %d = %d\n",x,y,x-y);
            break;
        case 3 :
            printf("Multiplication: %d X %d = %d\n",x,y,x%y);
            break;
        case 4 :
            printf("Divisor: %d/%d = %d\n",x,y,x/y);
            break;
        case 5 :
            printf("Remainder: %d / %d = %d\n",x,y,x%y);
            break;
        case 6 :
            for(int i=0;i<y;i++){
                pow = pow * x;
            }
            printf("Power: %d ^ %d = %d\n",x,y,pow);
            break;
        default :
            printf("Input Correct Choice,Try Again!!\n");
            break;
    }
}

//Main Function
int main(void){
    int num1,num2,t,init;
    printf("\t***...Welcome To Basic Calculator...***\n");
    printf("1.Addition(A+B)\n2.Subtraction(A-B)\n3.Multiplication(AxB)\n");
    printf("4.Division(A/B)\n5.Remainder Find(A mod B)\n6.Power Calculate(A^B)\n");

    label:
    printf("\nWant To Start Calculator Or Not?(1/0):");
    scanf("%d",&init);
    if(init==1){
        printf("Input 1st Number:");
        scanf("%d",&num1);
        printf("Input 2nd Number:");
        scanf("%d",&num2);
        printf("Input Your Choice:");
        scanf("%d",&t);
        myFun(num1,num2,t); //Function Calls
        goto label;
    }
    else{
        printf("Thank You! See You Next Day!!\n");
    }
    return 0;
}

