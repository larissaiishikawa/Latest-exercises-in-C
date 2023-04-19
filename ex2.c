// Square and cubic calculus

# include <stdio.h>
# include <math.h> // Mathematics library 

int main() {
    // Variable declaration
    int num; // Whole number
    int sq, cb; // Square and cubic output

    // Data input
    printf("Type a number to know its squared and cubic value!\n");
    scanf("%d", &num);

    // Processing
    sq = pow(num, 2);
    cb = pow(num, 3);

    // Data output
    printf("The square root of %d is %d, and the cubic root is %d.", num, sq, cb);
}