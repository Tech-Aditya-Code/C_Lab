#include <stdio.h>

int main()
{

    int a;
    printf("Enter first side: ");
    scanf("%d",&a);

    int b;
    printf("Enter second side: ");
    scanf("%d",&b);

    int c;
    printf("Enter third side: ");
    scanf("%d",&c);
    
    if((a + b) > c && (b + c) > a && (c + a) > b){
        printf("valid triangle");
    }
    else{
        printf("invalid triangle");
    }


    return 0;
}