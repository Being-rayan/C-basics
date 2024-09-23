// convert paise into rupees and paise.
#include <stdio.h>
int main () {
int rup,paise;
printf("Enter the Amount in paise:");
scanf("%d",&paise);
rup=paise/100;
// quoteint: / sign and remainder: % sign
printf("after conversion : %d Rupee and %d paise",rup,paise%100);
    return 0;
}