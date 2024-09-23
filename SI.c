// calculate the Simple Interest.
#include <stdio.h>
int main () {
    int p,n,r;
    printf ("Enter the principle amount :");
    scanf("%d",&p);
    printf ("Enter the n value :");
    scanf("%d",&n);
    printf ("Enter the rate :");
    scanf("%d",&r);
    printf("The Simple Interest is : %d",(p*n*r)/100); // SI=(p*n*r)/100
    return 0;
}