//Write A Program That Computes 3 Inputs Smallest & Largest Digit's Sum Difference.

#include <stdio.h>
#include <stdlib.h>

// Function prototypes
int minDigit(int num);  // Find the smallest digit
int maxDigit(int num);  // Find the largest digit
int myFun(int x, int y, int z); // Compute the key value

int main(void) {
    int k = myFun(3521, 2427, 7928);// Compute the key value for the given inputs
    printf("%d\n", k);// Output the result
    return 0;// Return success status
}

// Function to find the smallest digit in a number
int minDigit(int num) {
    int smallest = 9; // Initialize to the largest possible digit
    while (num != 0) {
        int rem = num % 10; // Get the last digit
        if (rem < smallest) {
            smallest = rem; // Update smallest if the current digit is smaller
        }
        num = num / 10; // Remove the last digit
    }
    return smallest;
}

// Function to find the largest digit in a number
int maxDigit(int num) {
    int largest = 0; // Initialize to the smallest possible digit
    while (num != 0) {
        int rem = num % 10; // Get the last digit
        if (rem > largest) {
            largest = rem; // Update largest if the current digit is larger
        }
        num = num / 10; // Remove the last digit
    }
    return largest;
}

// Function to compute the key value
int myFun(int x, int y, int z) {
    int minSum = minDigit(x) + minDigit(y) + minDigit(z);// Sum of the smallest digits
    int maxSum = maxDigit(x) + maxDigit(y) + maxDigit(z);// Sum of the largest digits
    return (minSum - maxSum);// Return the difference
}
