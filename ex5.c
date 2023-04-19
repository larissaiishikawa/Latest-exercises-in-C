// Car sales price calculator

#include <stdio.h>
#include <math.h>

int main() {
    // Variable declaration
    double mfc; // Manufacturer variable
    double pft; // Profit variable
    double IPI; // IPI variable
    double ICMS; // ICMS variable
    double slp; // Sales price variable

    // Data input
    printf("-----------------------------------\n");
    printf("CAR VALUE CALCULATOR!\n");
    printf("Type down the manufacturer price: \n");
    scanf("%lf", &mfc);

    // Processing
    pft = mfc*0.15;
    IPI = mfc*0.11;
    ICMS = mfc*0.17;
    slp = mfc+pft+IPI+ICMS;

    // Data output
    printf("-----------------------------------\n");
    printf("Manufacturer price  : R$ %.2lf\n", mfc);
    printf("Sales price         : R$ %.2lf\n", slp);
    printf("Profit              : R$ %.2lf\n", pft);
    printf("IPI                 : R$ %.2lf\n", IPI);
    printf("ICMS                : R$ %.2lf\n", ICMS);
    printf("-----------------------------------");
}