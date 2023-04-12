# include <stdio.h>

// delta formula

int main()
{
    float a, b, c, delta;
    
    printf("-----------------------------\n");
    printf("       DELTA CALCULUS\n");
    printf("-----------------------------\n");
    
    printf("What's A's value?\n");
    scanf("%f", &a);
    printf("What's B's value?\n");
    scanf("%f", &b);
    printf("What's C's value?\n");
    scanf("%f", &c);
    
    delta = b * b - 4 * a * c;
    
    printf("-----------------------------\n");
    printf("a = %.lf\n", a);
    printf("b = %.lf\n", b);
    printf("c = %.lf\n", c);
    printf("The result of delta is %.lf\n", delta);
    printf("-----------------------------\n");
    
}