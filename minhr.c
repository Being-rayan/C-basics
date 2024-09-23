// convert the seconds into its hour and minute form.
#include <stdio.h>
int main () {
    int seconds,sec,min,hr;
    printf("Enter the total seconds:");
    scanf("%d",&sec);
    seconds=sec%60; //% sign gives the remainder.
    min=sec/60;
    hr=min/60;
    printf("the total time is:%d hours %d minutes %d seconds",hr,min,seconds);
    return 0;
}