// Gallons per kilometers calculus

#include <stdio.h>
#include <math.h>

int main() {
    // Variable declaration
    int hrs; // Time variable
    int vel; // Average velocity variable
    int dis; // Distancy variable
    int gal; // Gallon quantity variable
    int lit; // Liters quantity variable

    // Data input
    printf("Hello User! Let's calculate how many gallons will be necessary for your car trip.");
    printf("First, type down the time spent at the trip, in hours:\n");
    scanf("%d", &hrs); // Time variable
    printf("Now type down the average velocity during the trip, in Km/h:\n");
    scanf("%d", &vel); // Average velocity variable

    // Processing
    dis = hrs*vel; // It calculates the distance, multiplying the amount of time spent by the velocity
    lit = dis/12; // Liter amount is calulated based on the information given by the question
    gal = lit/5; // Liters converted to gallons 

    // Data output
    printf("For a %d hour trip at a %d Km/h velocity, %d full gas gallons are necessary.", hrs, vel, gal);
}