// swap two numbers using a third variable.
#include <stdio.h>
int main () {
    int num1, num2, temp;
    printf("enter the 1st number:");
    scanf("%d",&num1);
    printf("enter the 2nd number:");
    scanf("%d",&num2);
    temp=num1; // temp me num1 ka value daal diye
    num1=num2; // num1 me num2 ka value daal diye
    num2=temp; // temp ka value jo ki num1 tha usko num2 me daal diye
printf("after swapping- 1st number: %d and 2nd number: %d",num1,num2);
}