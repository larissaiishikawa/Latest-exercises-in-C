// Weighted average of the individual scores

# include <stdio.h>
# include <math.h>

int main() {
    // Variable declaration
    double a, b, c; // Three decimals
    double ra, rb, rc; // Results of the scores w/ weight
    double res; // Result w/ weighted average

    // Data input
    printf("Hello!\nType down your 1st grade: ");
    scanf("%lf", &a);
    printf("Now type down your 2nd grade: ");
    scanf("%lf", &b);
    printf("Finally, type down your 3rd grade: ");
    scanf("%lf", &c);

    // Processing
    ra = a*2;
    rb = b*3;
    rc = c*5;
    res = (ra + rb + rc)/10;

    // Data output
    printf("---------------------------------------------------\n");
    printf("Your scores are:\n%.2f     |   %.2f   |   %.2f   \n", a, b, c);
    printf("Weighted scores:\n%.2f    |   %.2f   |   %.2f   \n", ra, rb, rc);
    printf("Weighted average of the individual scores: %.2f\n", res);
    printf("---------------------------------------------------");

}