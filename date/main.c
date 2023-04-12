#include <stdio.h>

int main()
{
    char nm[40];
    char dob[20];
    double height;
    
    printf("What's your name?\n");
    scanf("%s", nm);
    printf("Hello %s!\n", nm);
    
    printf("When were you born? (dd/mm/yyyy)\n");
    scanf("%s", dob);
    
    printf("What's your height? (in meters)\n");
    scanf("%lf", &height);
    
    printf("-------------------------\n");
    printf("      Your data\n");
    printf("Name   : %s\n", nm);
    printf("DOB    : %s\n", dob);
    printf("Height : %.2lf meters\n", height);
    printf("-------------------------\n");
    
    return 0;
}