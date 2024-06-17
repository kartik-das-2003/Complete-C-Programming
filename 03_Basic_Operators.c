#include<stdio.h>
#include<stdlib.h>

int main(void){
	int num1,num2;
	printf("Input Number_1:");
	scanf("%d",&num1);
	printf("Input Number_2:");
	scanf("%d",&num2);
	printf("ADD VALUE:%d\n",(num1+num2));
	printf("MULTIPLY VALUE:%d\n",(num1*num2));
	printf("SUBTRACT VALUE:%d\n",(num1-num2));
	printf("DIVISOR VALUE:%d\n",(num1/num2));
	printf("MODULUS VALUE:%d\n",(num1%num2));
	return 0;
}