#include <stdio.h>

int main()
{
    int x;
    printf("Enter first number: ");
    scanf("%d", &x);

    int y;
    printf("Enter second number: ");
    scanf("%d", &y);

    int sum = x + y;
    printf("The sum of given numbers is: %d",sum);

    return 0;
}