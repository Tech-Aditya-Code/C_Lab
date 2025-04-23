#include <stdio.h>

int main()
{
    int j;
    printf("\n%d", j);
    while(j <= 10){ // garbage value
        j = j + 1;
    }

    return 0;
}