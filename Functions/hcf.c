#include <stdio.h>
int min(int a, int b){
    if(a < b) return a;
    else return b;
}
int gcd(int a, int b){
    int hcf;
    for(int i = min(a, b); i >= 1; i--){
        if(a % i == 0 && b % i == 0){
            hcf = i;
            break;
        }
    }
    return hcf;
}

int main()
{
    int a;
    printf("Enter first number: ");
    scanf("%d", &a);
    int b;
    printf("Enter second number: ");
    scanf("%d", &b);
    int hcf = gcd(a, b);
    printf("The hcf/gcd of a and b is: %d", a,b,hcf);


    return 0;
}