#include <stdio.h>

int main()
{
    int n;
    printf("Enter no of rows: ");
    scanf("%d", &n);
    // n = 4 -> 1 3 5 7
    
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= 2*n-1; j=j+2){
            printf("%d ", j);
            
        }
        printf("\n");
    }

    return 0;
}