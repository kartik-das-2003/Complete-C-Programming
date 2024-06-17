#include<stdio.h>
#include<stdlib.h>

int main(void){
	int num;
	printf("Input Any Number:");
	scanf("%d",&num);
	if(num%2==0){
		printf("The Number %d Is Even",num);
	}
	else{
		printf("The Number %d Is Odd",num);
	}
	return 0;
}