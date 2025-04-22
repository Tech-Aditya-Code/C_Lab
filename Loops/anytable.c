#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    int a;
    for(int i = 1; i <= n; i++){
        printf("%d", i);
        a = a * i;
    }
    
    
    // for(int i = 19; i <= 190; i += 19){
    //     printf("%d ", i);
    // }

   return 0;
}