// convert fahrenheit to celcius.
#include <stdio.h>
int main () {
    float farh,cel;
    printf("enter the temp in fahrenheit:");
    scanf("%f",&farh);
    cel=(farh-32)/1.8; // formula
    printf("the temperature in celsius is :%.2f",cel);
    return 0;
}