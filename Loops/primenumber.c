#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(int i = 2; i <= n - 1; i++){
        if(n % i == 0){ // i is factor of n
            printf("Our number is composite");
            break;
        }
    }

    return 0;
}