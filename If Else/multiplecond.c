#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n > 5){
        printf("number greater than 5");
    }
    else{
        printf("number not greater than 5");
    }

    return 0;
}