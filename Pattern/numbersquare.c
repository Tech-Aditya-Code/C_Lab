#include <stdio.h>

int main()
{
    int n;
    printf("Enter no of rows: ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){ // 1 2 3 4....
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}