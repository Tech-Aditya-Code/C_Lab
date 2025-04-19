#include <stdio.h>

int main()
{
    int ram;
    printf("Enter ram age: ");
    scanf("%d",&ram);
    int shyam;
    printf("Enter shyam age: ");
    scanf("%d",&shyam);
    int ajay;
    printf("Enter ajay age: ");
    scanf("%d",&ajay);

    if(ram < shyam){
        if(ram < ajay)
            printf("%d ram younger than all",ram);
        else 
            printf("%d ajay the younger than all",ajay);
    }
    else{
        if(shyam < ajay)
            printf("%d shyam is younger than all",shyam);
        else
        printf("%d ajay is younger than all",ajay);
    }
        

    return 0;
}