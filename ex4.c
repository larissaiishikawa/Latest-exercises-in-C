// Seconds to hours converter

#include <stdio.h>
#include <math.h>

int main() {
    // Variable declaration
    int ask; // Seconds input variable
    int hrs; // Hours variable
    int min; // Minutes variable
    int sec; // Seconds variable
    int cvt = 3600; // Seconds to hours converter

    // Data input
    printf("TIME CONVERTER!\n");
    printf("Type down how many seconds do you want to convert to hours: ");
    scanf("%d", &ask);

    // Processing
    hrs = ask/cvt;
    min = (ask%cvt)/60;
    sec = ((ask%cvt)%60);


    // Data output
    printf("The duration of %d seconds corresponds to %02d:%02d:%02d", ask, hrs, min, sec);
}