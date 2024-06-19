#include<stdio.h>
#include<stdlib.h>

int main(void){
	printf("\tBitwise Operations:\n");

	int x,y,n;
	printf("Input X:");
	scanf("%d",&x); //example-> 5 => 0101
	printf("Input Y:");
	scanf("%d",&y); //example-> 9 => 1001

	printf("\n");
	printf("X and Y:%d\n",x&y); // -> 0001 => 1
	printf("X or Y:%d\n",x|y); // -> 1101 => 13
	printf("X xor Y:%d\n",x^y); // -> 1100 => 12
	printf("X Complement:%d\n",~x); // -> Represent 2's Complement
	printf("Y Complement:%d\n",~y); // -> Represent 2's Complement

	printf("\n\tTry Bitwise Shift Operation:\n");
	printf("How Much Bit Try To Shift Both Cases(Left And Right):");
	scanf("%d",&n); //Example -> 2
	
	printf("\n***Perform Right Shift:\n");
	printf("%d >> %d : %d\n",x,n,x>>n); //5>>2 --> 101>>2 --> 001 --> 1
	printf("%d >> %d : %d\n",y,n,y>>n); //9>>2 --> 1000>>2 --> 0010 --> 2

	printf("\n***Perform Left Shift:\n");
	printf("%d << %d : %d\n",x,n,x<<n); //5<<2 --> 101<<2 --> 10100 --> 20
	printf("%d << %d : %d\n",y,n,y<<n); //9<<2 --> 1001<<2 --> 100100 --> 36
	return 0;
}
