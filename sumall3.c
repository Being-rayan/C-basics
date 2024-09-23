// sum of all digits of a 3 digit number. *
#include <stdio.h>
int main () {
    int sum2,sum3,final,sum,num;
    printf("enter the 3 digit number");
    scanf("%d",&num);
    sum=num/100; // gives the 1st digit .
    sum2=(num/10)%10; //(num/10) removes the 3rd digit and then %10 gives 2nd digit.
    sum3=num%10; //gives the 3rd digit.
    final=sum+sum2+sum3;
    printf("the sum of 3 digit numbers are %d",final);
    return 0;
}