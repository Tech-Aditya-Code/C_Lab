#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n % 5 == 0 && n % 3 == 0){
        printf("number div by 5 and 3");
    }
    else{
        printf("not div by 5 and 3");
    }

    return 0;
}