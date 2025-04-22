#include <stdio.h>

int main()
{
    for(int i = 1; i <= 100; i += 2){
        if(i % 1 == 0){
            printf("%d ", i);
        }
    }
   return 0;
}