#include<stdio.h>
#include<stdlib.h>

//Most Expected O(sqrt(n)) ---->>>Best
#include <stdio.h>

int main() {
    int num, i;
    int isPrime = 1;  // Assume the number is prime

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 1) {
        isPrime = 0;  // Numbers less than or equal to 1 are not prime
    } else {
        for (i = 2; i * i <= num; i++) {  // Check up to the square root of the number
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime)
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);

    return 0;
}


//Neither be late but easiest one ----> Apparantly best but not good O(n)
/*
#include <stdio.h>
#include <stdbool.h>

bool isPrime(int n) {
    if (n <= 1)
        return false;

    // Check divisibility from 2 to n-1
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;

    return true;
}

int main() {
    int n = 11;
    if( isPrime(n)) printf("%s","true");
  	else printf("%s","false");
    return 0;
}
*/

//Good But More Complex but O(sqrt(n)) time
/*
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
*/
