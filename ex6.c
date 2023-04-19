// Km/h to m/s converter

#include <stdio.h>
#include <math.h>

int main() {
    // Variable declaration
    int kmh; // Km/h variable
    int ms; // m/s variable

    // Data input 
    printf("-----------------------------------------------------\n");
    printf("KM/H --> M/S CONVERTER!\n");
    printf("Type down the velocity in kilometers per hour (Km/h) \nthat you want to convert to meters per seconds (m/s): \n");
    scanf("%d", &kmh);
    printf("-----------------------------------------------------\n");

    // Processing
    ms = trunc(kmh/3.6);

    // Data output
    printf("%d Km/h equals to %d m/s\n", kmh, ms);
    printf("-----------------------------------------------------\n");

}