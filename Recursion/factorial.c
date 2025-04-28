#include <stdio.h>
int factorial(int n){
    if(n == 1 || n == 0) return 1; // base case
    int recans = n*factorial(n-1);
    return recans;
}


int main()
{
    int n; 
    printf("Enter a number: ");
    scanf("%d", &n);
    int fact = factorial(n);
    printf("%d", fact);

    return 0;
}