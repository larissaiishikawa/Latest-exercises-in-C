// Square of the sum of two whole numbers

# include <stdio.h>

int main()
{
    // Variable declaration
    int a, b; // Two whole numbers
    int res; // Square of the sum

    // Data input
    printf("Square of the sum of two whole numbers!\n");

    printf("Type the first number:\n");
    scanf("%d", &a);
    printf("Now type the second number:\n");
    scanf("%d", &b);

    // Processing
    res = (a+b)*(a+b);

    // Data output
    printf("The square of the sum of %d and %d is %d!\n", a, b, res);
}