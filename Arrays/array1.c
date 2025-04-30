#include <stdio.h>

int main()
{
    int arr[5];

    for(int i = 0; i <= 4; i++){
        int a = i+1;
        printf("\nEnter element no %d", i+1);
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i <= 4; i++)
        printf("%d", arr[i]);
    // {2,3,4,7,9}
    // {1,2,3,4,5}
    // printf("%d", arr[1]);

    return 0;
}