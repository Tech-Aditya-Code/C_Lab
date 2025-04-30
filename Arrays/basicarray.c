#include <stdio.h>

int main()
{
    // int arr[5] = {2,4,6,8,1};
    // arr[4] = 100; // {2,4,6,8,100}
    // arr[1] = 1; // {2,1,6,8,100}
    // printf("%d",arr[-1]);

    int arr[4];
    printf("Enter first element: ");
    scanf("%d", &arr[0]);
    printf("Enter second element: ");
    scanf("%d", &arr[1]);
    printf("Enter third element: ");
    scanf("%d", &arr[2]);
    printf("Enter fourth element: ");
    scanf("%d", &arr[3]);

    printf("%d", arr[3]);
    // arr[0] = 1;
    // arr[1] = 3;
    // arr[2] = 4;
    // arr[3] = 10;
    // arr[4] = 2;
    // printf("%d", arr[3]);

    return 0;
}