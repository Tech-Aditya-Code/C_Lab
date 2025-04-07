#include <stdio.h>

int main()
{
    int a,b; // a > b
    printf("Enter divident"); // divident
    scanf("%d",&a);

    printf("Enter divisor"); // divisor
    scanf("%d",&b);

    int q = a / b; // quotient

    int r = a - (b*q); // divisor *  quotient + remainder = divident

    printf("The remainder when %d is divied by %d is: %d",a,b,r);

    return 0;
}