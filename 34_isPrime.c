#include<stdio.h>
#include<stdlib.h>

int isPrime(int num) {
    if (num<=1) {
        return -1; // Not prime
    }
    if (num<=3) {
        return 1; // 2 and 3 are prime numbers
    }
    if (num%2==0 || num%3==0) {
        return -1; // Multiples of 2 and 3 are not prime
    }
    for (int i=5;i*i<=num;i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) {
            return -1; // Not prime if divisible by i or i+2
        }
    }
    return 1; //Prime Number
}

int main(void){
    int input;
    printf("Input A Number To Check Prime Or Not:");
    scanf("%d",&input);
    if(isPrime(input)==1){
        printf("%d Is A Prime Number\n",input);
    }
    else{
        printf("%d Is Not A Prime Number\n",input);
    }
    return 0;
}
