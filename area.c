// print the area of a rectangle taking l and b from user.
#include <stdio.h>
int main () {
    int area,l,b;
    printf("Enter the lenght:");
    scanf("%d",&l);
     printf("Enter the breadth:");
    scanf("%d",&b);
    area=l*b; // formula
    printf("the area is :%d",area);
    return 0;
}