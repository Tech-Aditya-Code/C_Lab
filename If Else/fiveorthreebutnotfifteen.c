#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    // if(n % 5 == 0 || n % 3 == 0){
    //     if(n % 15 != 0){
    //         printf("the number is divisible by 5 or 3 but not 15");
    //     }
    //     else {
    //         printf("the number is divisible by 15");
    //     }
    // }
    // BODMAS
    // bracket first
    if((n % 5 == 0 || n % 3 == 0) && n % 15 != 0){
        printf("the number is divisible by 5 or 3 but not 15");
    }
    else{
        printf("not matching the condition");
    }

    return 0;
}