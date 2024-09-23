// sum of 1st and last number of user defined number.
#include <stdio.h>
int main () {
    int num,last,inp;
    printf("enter a 5 digit number:");
    scanf("%d",&inp);
    num=inp%10; //gives remainder
    last=inp/10000; // gives quotient
    printf("the sum is :%d",num+last);
    return 0;
}