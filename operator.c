//check if the student can take admission or not
// his age must be between 16 and 22 (incl.)
#include <stdio.h>
int main () {
    int age,check;
    printf("Enter the age:");
    scanf("%d",&age);
    check=(age>=16 && age<=22);
    printf("0 means no and 1 means yes : %d",check);
    return 0;
}