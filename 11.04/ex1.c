// Exchange of values between variables

# include <stdio.h>

int main() {
    // Variable declaration
    int v1, v2; // Two whole numbers variables
    int aux; // Aux variable

    // Data input
    printf("Hello! \nType v1's value: \n");
    scanf("%d", &v1);
    printf("Type the v2's value: \n");
    scanf("%d", &v2);

    // Processing
    aux = v1;
    v1 = v2;
    v2 = aux;

    // Data output
    printf("VALUES EXCHANGE!\n");
    printf("Now the value of v1 is %d and the value of v2 is %d!", v1, v2);
}