#include <stdio.h>

int main()
{
    int a;
    if(3 + 2 % 5)
        printf("This Works");
    if(10)
        printf("Even this works");
    if(-5)
        printf("Surprisingly even this works");
    if('a'){
        printf("Hello");
    }

    return 0;
}