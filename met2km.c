//Convert meters into its km and meter form.
#include <stdio.h>
int main () {
    int met,km,m;
    printf("Enter the distance in M:");
    scanf("%d",&m);
    km=m/1000;
    met=m%1000; //% sign gives the remainder.
    printf("The converted distance is :%d KM and %d M",km,met);
    return 0;
}