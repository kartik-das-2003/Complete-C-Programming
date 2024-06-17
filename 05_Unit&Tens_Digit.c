#include<stdio.h>
#include<stdlib.h>

int main(void){
	int num;
	printf("Input Any Number(Atleast 2 Digit Number):");
	scanf("%d",&num);
	printf("The Unit Digit Of Number Is:%d\n",num%10);
	printf("The Tens Digit Of Number Is:%d\n",num/10); 
	return 0;
}