# include <stdio.h>
# include <math.h>

// odd or even number

int main() {
    int num, res;

    printf("------------------------------------\n");
    printf("        odd or even number?\n");
    printf("------------------------------------\n");
    printf("give me a number: ");
    scanf("%d", &num);

    res = num % 2;

    printf("------------------------------------\n");
    printf("%d! ", num);

    if(res == 0) {
        printf("it's an even number!\n");
    }
    else {
        printf("it's an odd number!\n");
    }
    printf("------------------------------------\n");

}