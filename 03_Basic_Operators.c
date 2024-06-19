//Concept Of --> Arithmetic,Comma,Assignment & Increment And Decrement Operator

#include<stdio.h>
#include<stdlib.h>

int main(void){
	printf("\n\tArithmetic Operations:\n");
	int num1,num2;//Comma Operator

	printf("Input Number_1:");
	scanf("%d",&num1);
	printf("Input Number_2:");
	scanf("%d",&num2);

	printf("ADD VALUE:%d\n",(num1+num2));
	printf("MULTIPLY VALUE:%d\n",(num1*num2));
	printf("SUBTRACT VALUE:%d\n",(num1-num2));
	printf("DIVISOR VALUE:%d\n",(num1/num2));
	printf("MODULUS VALUE:%d\n",(num1%num2));

	printf("\n\tIncrement & Decrement Operations:\n");
	int x;
	printf("Input X:");
	scanf("%d",&x);
	int a=x; //Assignment Opereator
	printf("X++: %d\n",x++); //Increment After Print
	printf("++X: %d\n",++a); //Increment Before Print

	int y;
	printf("\nInput Y:");
	scanf("%d",&y);
	int b = y;
	printf("Y--: %d\n",y--); //Decrement After Print
	printf("--Y: %d\n",--b); //Decrement Before Print
	return 0;
}
