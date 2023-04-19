// Bhaskara calculus

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    // Variable declaration
    float a, b, c; // Coefficient variable
    float x1, x2; // Roots variable
    float delta; // Delta variable

    // Data input
    printf("Hello! \nLet's calculate the second degree equation roots!\n");
    printf("First, type the 'a' coefficient: ");
    scanf("%f", &a);
    printf("Next, type the 'b' coefficient: ");
    scanf("%f", &b);
    printf("Now, type the 'c' coefficient: ");
    scanf("%f", &c);

    // Processing
    delta = pow(b, 2) - 4 * a * c; // Delta calculus
    x1 = (-b + sqrt(delta))/2*a;
    x2 = (-b - sqrt(delta))/2*a;
    
    // Data output
    printf("------------------------------------------------\n");
    printf("RESULTS:\n");
    if (delta < 0) {
        printf("For the equation %.0lfx^2 + %.0lfx + %.0lf = 0,\nthe coefficients are a = %.0lf, b = %.0lf and c = %.0lf.\n", a, b, c, a, b, c);
        printf("The equation does not have roots because the delta equals %.0lf\n", delta);
    } else {
        if (b > 0 && c > 0) {
            printf("For the equation %.0lfx^2 + %.0lfx + %.0lf = 0,\nthe coefficients are a = %.0lf, b = %.0lf and c = %.0lf.\n", a, b, c, a, b, c);
            printf("And the roots are x' = %.0lf and x'' = %.0lf\n", x1, x2);
        }
        else if (b < 0 && c < 0) {
            b = abs(b);
            c = abs(c);
            printf("For the equation %.0lfx^2 - %.0lfx - %.0lf = 0,\nthe coefficients are a = %.0lf, b = -%.0lf and c = -%.0lf.\n", a, b, c, a, b, c);
            printf("And the roots are x' = %.0lf and x'' = %.0lf\n", x1, x2);
        }
        else if (b < 0) {
            b = abs(b);
            printf("For the equation %.0lfx^2 - %.0lfx + %.0lf = 0,\nthe coefficients are a = %.0lf, b = -%.0lf and c = %.0lf.\n", a, b, c, a, b, c);
            printf("And the roots are x' = %.0lf and x'' = %.0lf\n", x1, x2);
        } else if (c < 0) {
            c = abs(c);
            printf("For the equation %.0lfx^2 + %.0lfx - %.0lf = 0,\nthe coefficients are a = %.0lf, b = %.0lf and c = -%.0lf.\n", a, b, c, a, b, c);
            printf("And the roots are x' = %.0lf and x'' = %.0lf \n", x1, x2);
        } 
    }
    printf("------------------------------------------------\n");
}