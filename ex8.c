// Distance between two points calculator

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    // Variable declaration
    float x1, y1, x2, y2; // Point variables
    float dAB; // Distance result variable

    // Data input
    printf("DISTANCE BETWEEN TWO POINTS CALCULATOR!\n");
    printf("Type down the coordinates to point A (ex: x y):\n");
    scanf("%f %f", &x1, &y1);
    printf("Now type down the coordinates to point B (ex: x y):\n");
    scanf("%f %f", &x2, &y2);

    // Processing
    dAB = sqrt(pow((x2-x1),2) + pow((y2-y1),2));

    // Data output
    printf("Given the points A(%.0lf, %.0lf) and B(%.0lf, %.0lf), the distance between them is %.0lf.", x1, y1, x2, y2, dAB);
}