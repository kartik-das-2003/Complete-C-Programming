#include <stdio.h>
#include <stdlib.h>

//Directly Write The Whole Function In Prototype Section
int reverse(int num){
    int rem,rev=0;
    while(num!=0){
        rem = num%10;
        rev = rev*10 + rem;
        num = num/10;
    }
    return rev;
}
void palindrome(int org_num,int rev_num){
    if(org_num==rev_num){
        printf("The Number:%d Is A Palindrome Number.\n",org_num);
    }
    else{
        printf("The Number:%d Is Not A Palindrome Number.\n",org_num);
    }
}
//Main Function
int main(void){
    int number ;
    printf("Input A Number To Check Palindrome Or Not:");
    scanf("%d",&number);
    int value = reverse(number);
    palindrome(number,value);
    return 0;
}
