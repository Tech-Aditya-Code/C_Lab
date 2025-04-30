#include <stdio.h>
#include <limits.h>

int main()
{
    int arr[7] = {-10,-4,-2,-8,-19,-5,-12};
    int max = INT_MIN; // sabse small number
    int smax = INT_MIN;
    for(int i = 0; i <= 6; i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }
    // max = -4
    for(int i = 0; i <= 6; i++){
        if(arr[i] != max && smax < arr[i]){
            smax = arr[i];
        }
    }

    printf("%d", max);

    return 0;
}