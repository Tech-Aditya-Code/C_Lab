#include <stdio.h>

int main()
{
    int n; 
    printf("Enter a number: ");
    scanf("%d", &n);
    // 1 + 2 + 3 + 4 ...n terms
    int sum = 0;
    for(int i = 1; i <= n; i++){
        sum = sum + i;
    }
    printf("the sum is: %d", sum);
    return 0;
}