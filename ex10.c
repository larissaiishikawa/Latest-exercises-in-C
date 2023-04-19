// Paint x Cost calculator

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    // Variable declaration
    double h; // Height variable
    double r; // Radius variable
    double ta; // Total area variable
    double pcp; // Paint can price variable
    double pcq; // Paint can quantity variable
    double tc; // Total cost variable
    double canM = 15; // Total painted quadratic meters painted per can variable
    double pi = 3.14159; // Pi's value variable
    
    // Data input
    printf("HOW MUCH PAINT WILL YOU NEED? HOW MUCH ARE YOU GOING TO SPEND?\n");
    printf("Answer those objective questions and find out now!\n");
    printf("---------------------------------------------------------------\n");
    printf("What's the tank height? (in meters)\n");
    scanf("%lf", &h);
    printf("What's the tank radius? (in meters)\n");
    scanf("%lf", &r);
    printf("How much is each can of paint?\n");
    scanf("%lf", &pcp);

    // Processing
    ta = 2*pi*r*(h+r);
    pcq = ta/canM;
    tc = pcp*pcq;

    // Data output
    printf("---------------------------------------------------------------\n");
    printf("RESULTS:\n");
    printf("Height                      : %.2lf\n", h);
    printf("Radius                      : %.2lf\n", r);
    printf("Total tank area             : %.2lfm^2\n", ta);
    printf("Paint can necessary amount  : %.2lf\n", pcq);
    printf("Paint can price             : R$ %.2lf\n", pcp);
    printf("Total cost                  : R$ %.2lf\n", tc);
    printf("---------------------------------------------------------------\n");
}