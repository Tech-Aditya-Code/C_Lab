#include <stdio.h>
int suml(int n){
    if(n == 1 || n == 0) return 1; // base case
    int recans = n+sum(n-1);
    return recans;
}


int main()
{
    int n; 
    printf("Enter a number: ");
    scanf("%d", &n);
    int fact = sum(n);
    printf("%d", fact);

    return 0;
}